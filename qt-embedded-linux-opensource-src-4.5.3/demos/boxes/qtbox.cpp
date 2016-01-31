/****************************************************************************
**
** Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the demonstration applications of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial Usage
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Nokia.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qtbox.h"

const qreal ROTATE_SPEED_X = 30.0 / 1000.0;
const qreal ROTATE_SPEED_Y = 20.0 / 1000.0;
const qreal ROTATE_SPEED_Z = 40.0 / 1000.0;
const int MAX_ITEM_SIZE = 512;
const int MIN_ITEM_SIZE = 16;

//============================================================================//
//                                  ItemBase                                  //
//============================================================================//

ItemBase::ItemBase(int size, int x, int y) : m_size(size), m_isResizing(false)
{
    setFlag(QGraphicsItem::ItemIsMovable, true);
    setFlag(QGraphicsItem::ItemIsSelectable, true);
    setFlag(QGraphicsItem::ItemIsFocusable, true);
    setAcceptHoverEvents(true);
    setPos(x, y);
    m_startTime = QTime::currentTime();
}

ItemBase::~ItemBase()
{
}

QRectF ItemBase::boundingRect() const
{
    return QRectF(-m_size / 2, -m_size / 2, m_size, m_size);
}

void ItemBase::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *)
{
    if (option->state & QStyle::State_Selected) {
        painter->setRenderHint(QPainter::Antialiasing, true);
        if (option->state & QStyle::State_HasFocus)
            painter->setPen(Qt::yellow);
        else
            painter->setPen(Qt::white);
        painter->drawRect(boundingRect());

        painter->drawLine(m_size / 2 - 9, m_size / 2, m_size / 2, m_size / 2 - 9);
        painter->drawLine(m_size / 2 - 6, m_size / 2, m_size / 2, m_size / 2 - 6);
        painter->drawLine(m_size / 2 - 3, m_size / 2, m_size / 2, m_size / 2 - 3);

        painter->setRenderHint(QPainter::Antialiasing, false);
    }
}

void ItemBase::contextMenuEvent(QGraphicsSceneContextMenuEvent *event)
{
    if (!isSelected() && scene()) {
        scene()->clearSelection();
        setSelected(true);
    }

    QMenu menu;
    QAction *delAction = menu.addAction("Delete");
    QAction *newAction = menu.addAction("New");
    QAction *growAction = menu.addAction("Grow");
    QAction *shrinkAction = menu.addAction("Shrink");

    QAction *selectedAction = menu.exec(event->screenPos());

    if (selectedAction == delAction)
        deleteSelectedItems(scene());
    else if (selectedAction == newAction)
        duplicateSelectedItems(scene());
    else if (selectedAction == growAction)
        growSelectedItems(scene());
    else if (selectedAction == shrinkAction)
        shrinkSelectedItems(scene());
}

void ItemBase::duplicateSelectedItems(QGraphicsScene *scene)
{
    if (!scene)
        return;

    QList<QGraphicsItem *> selected;
    selected = scene->selectedItems();

    foreach (QGraphicsItem *item, selected) {
        ItemBase *itemBase = dynamic_cast<ItemBase *>(item);
        if (itemBase)
            scene->addItem(itemBase->createNew(itemBase->m_size, itemBase->pos().x() + itemBase->m_size, itemBase->pos().y()));
    }
}

void ItemBase::deleteSelectedItems(QGraphicsScene *scene)
{
    if (!scene)
        return;

    QList<QGraphicsItem *> selected;
    selected = scene->selectedItems();

    foreach (QGraphicsItem *item, selected) {
        ItemBase *itemBase = dynamic_cast<ItemBase *>(item);
        if (itemBase)
            delete itemBase;
    }
}

void ItemBase::growSelectedItems(QGraphicsScene *scene)
{
    if (!scene)
        return;

    QList<QGraphicsItem *> selected;
    selected = scene->selectedItems();

    foreach (QGraphicsItem *item, selected) {
        ItemBase *itemBase = dynamic_cast<ItemBase *>(item);
        if (itemBase) {
            itemBase->prepareGeometryChange();
            itemBase->m_size *= 2;
            if (itemBase->m_size > MAX_ITEM_SIZE)
                itemBase->m_size = MAX_ITEM_SIZE;
        }
    }
}

void ItemBase::shrinkSelectedItems(QGraphicsScene *scene)
{
    if (!scene)
        return;

    QList<QGraphicsItem *> selected;
    selected = scene->selectedItems();

    foreach (QGraphicsItem *item, selected) {
        ItemBase *itemBase = dynamic_cast<ItemBase *>(item);
        if (itemBase) {
            itemBase->prepareGeometryChange();
            itemBase->m_size /= 2;
            if (itemBase->m_size < MIN_ITEM_SIZE)
                itemBase->m_size = MIN_ITEM_SIZE;
        }
    }
}

void ItemBase::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if (m_isResizing) {
        int dx = int(2.0 * event->pos().x());
        int dy = int(2.0 * event->pos().y());
        prepareGeometryChange();
        m_size = (dx > dy ? dx : dy);
        if (m_size < MIN_ITEM_SIZE)
            m_size = MIN_ITEM_SIZE;
        else if (m_size > MAX_ITEM_SIZE)
            m_size = MAX_ITEM_SIZE;
    } else {
        QGraphicsItem::mouseMoveEvent(event);
    }
}

void ItemBase::hoverMoveEvent(QGraphicsSceneHoverEvent *event)
{
    if (m_isResizing || (isInResizeArea(event->pos()) && isSelected()))
        setCursor(Qt::SizeFDiagCursor);
    else
        setCursor(Qt::ArrowCursor);
    QGraphicsItem::hoverMoveEvent(event);
}

void ItemBase::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    static qreal z = 0.0;
    setZValue(z += 1.0);
    if (event->button() == Qt::LeftButton && isInResizeArea(event->pos())) {
        m_isResizing = true;
    } else {
        QGraphicsItem::mousePressEvent(event);
    }
}

void ItemBase::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton && m_isResizing) {
        m_isResizing = false;
    } else {
        QGraphicsItem::mouseReleaseEvent(event);
    }
}

void ItemBase::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Delete:
        deleteSelectedItems(scene());
        break;
    case Qt::Key_Insert:
        duplicateSelectedItems(scene());
        break;
    case Qt::Key_Plus:
        growSelectedItems(scene());
        break;
    case Qt::Key_Minus:
        shrinkSelectedItems(scene());
        break;
    default:
        QGraphicsItem::keyPressEvent(event);
        break;
    }
}

void ItemBase::wheelEvent(QGraphicsSceneWheelEvent *event)
{
    prepareGeometryChange();
    m_size = int(m_size * exp(-event->delta() / 600.0));
    if (m_size > MAX_ITEM_SIZE)
        m_size = MAX_ITEM_SIZE;
    else if (m_size < MIN_ITEM_SIZE)
        m_size = MIN_ITEM_SIZE;
}

bool ItemBase::isInResizeArea(const QPointF &pos)
{
    return (-pos.y() < pos.x() - m_size + 9);
}

//============================================================================//
//                                    QtBox                                   //
//============================================================================//

QtBox::QtBox(int size, int x, int y) : ItemBase(size, x, y), m_texture(0)
{
    for (int i = 0; i < 8; ++i) {
        m_vertices[i][0] = (i & 1 ? 0.5f : -0.5f);
        m_vertices[i][1] = (i & 2 ? 0.5f : -0.5f);
        m_vertices[i][2] = (i & 4 ? 0.5f : -0.5f);
    }
    for (int i = 0; i < 4; ++i) {
        m_texCoords[i][0] = (i & 1 ? 1.0f : 0.0f);
        m_texCoords[i][1] = (i & 2 ? 1.0f : 0.0f);
    }
    memset(m_normals, 0, sizeof(m_normals));
    for (int i = 0; i < 3; ++i) {
        m_normals[2 * i + 0][i] = -1.0f;
        m_normals[2 * i + 1][i] = 1.0f;
    }
}

QtBox::~QtBox()
{
    if (m_texture)
        delete m_texture;
}

ItemBase *QtBox::createNew(int size, int x, int y)
{
    return new QtBox(size, x, y);
}

void QtBox::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rect = boundingRect().translated(pos());
    float width = float(painter->device()->width());
    float height = float(painter->device()->height());

    float left = 2.0f * float(rect.left()) / width - 1.0f;
    float right = 2.0f * float(rect.right()) / width - 1.0f;
    float top = 1.0f - 2.0f * float(rect.top()) / height;
    float bottom = 1.0f - 2.0f * float(rect.bottom()) / height;
    float moveToRectMatrix[] = {
        0.5f * (right - left), 0.0f, 0.0f, 0.0f,
        0.0f, 0.5f * (bottom - top), 0.0f, 0.0f,
        0.0f, 0.0f, 1.0f, 0.0f,
        0.5f * (right + left), 0.5f * (bottom + top), 0.0f, 1.0f
    };

    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadMatrixf(moveToRectMatrix);
    gluPerspective(60.0, 1.0, 0.01, 10.0);

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();

    //glEnable(GL_DEPTH_TEST);
    glEnable(GL_CULL_FACE);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_NORMALIZE);

    if(m_texture == 0)
        m_texture = new GLTexture2D(":/res/boxes/qt-logo.jpg", 64, 64);
    m_texture->bind();
    glEnable(GL_TEXTURE_2D);

    glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
    float lightColour[] = {1.0f, 1.0f, 1.0f, 1.0f};
    float lightDir[] = {0.0f, 0.0f, 1.0f, 0.0f};
    glLightfv(GL_LIGHT0, GL_DIFFUSE, lightColour);
    glLightfv(GL_LIGHT0, GL_POSITION, lightDir);
    glEnable(GL_LIGHT0);

    glTranslatef(0.0f, 0.0f, -1.5f);
    glRotatef(ROTATE_SPEED_X * m_startTime.msecsTo(QTime::currentTime()), 1.0f, 0.0f, 0.0f);
    glRotatef(ROTATE_SPEED_Y * m_startTime.msecsTo(QTime::currentTime()), 0.0f, 1.0f, 0.0f);
    glRotatef(ROTATE_SPEED_Z * m_startTime.msecsTo(QTime::currentTime()), 0.0f, 0.0f, 1.0f);
    int dt = m_startTime.msecsTo(QTime::currentTime());
    if (dt < 500)
        glScalef(dt / 500.0f, dt / 500.0f, dt / 500.0f);

    for (int dir = 0; dir < 3; ++dir) {
        glColor4f(1.0f, 1.0f, 1.0f, 1.0);

        glBegin(GL_TRIANGLE_STRIP);
        glNormal3fv(m_normals[2 * dir + 0].bits());
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                glTexCoord2fv(m_texCoords[(j << 1) | i].bits());
                glVertex3fv(m_vertices[(i << ((dir + 2) % 3)) | (j << ((dir + 1) % 3))].bits());
            }
        }
        glEnd();

        glBegin(GL_TRIANGLE_STRIP);
        glNormal3fv(m_normals[2 * dir + 1].bits());
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                glTexCoord2fv(m_texCoords[(j << 1) | i].bits());
                glVertex3fv(m_vertices[(1 << dir) | (i << ((dir + 1) % 3)) | (j << ((dir + 2) % 3))].bits());
            }
        }
        glEnd();
    }
    m_texture->unbind();

    //glDisable(GL_DEPTH_TEST);
    glDisable(GL_CULL_FACE);
    glDisable(GL_LIGHTING);
    glDisable(GL_COLOR_MATERIAL);
    glDisable(GL_TEXTURE_2D);
    glDisable(GL_LIGHT0);
    glDisable(GL_NORMALIZE);

    glPopMatrix();

    glMatrixMode(GL_PROJECTION);
    glPopMatrix();

    ItemBase::paint(painter, option, widget);
}

//============================================================================//
//                                 CircleItem                                 //
//============================================================================//

CircleItem::CircleItem(int size, int x, int y) : ItemBase(size, x, y)
{
     m_color = QColor::fromHsv(rand() % 360, 255, 255);
}

void CircleItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    int dt = m_startTime.msecsTo(QTime::currentTime());

    qreal r0 = 0.5 * m_size * (1.0 - exp(-0.001 * ((dt + 3800) % 4000)));
    qreal r1 = 0.5 * m_size * (1.0 - exp(-0.001 * ((dt + 0) % 4000)));
    qreal r2 = 0.5 * m_size * (1.0 - exp(-0.001 * ((dt + 1800) % 4000)));
    qreal r3 = 0.5 * m_size * (1.0 - exp(-0.001 * ((dt + 2000) % 4000)));

    if (r0 > r1)
        r0 = 0.0;
    if (r2 > r3)
        r2 = 0.0;

    QPainterPath path;
    path.moveTo(r1, 0.0);
    path.arcTo(-r1, -r1, 2 * r1, 2 * r1, 0.0, 360.0);
    path.lineTo(r0, 0.0);
    path.arcTo(-r0, -r0, 2 * r0, 2 * r0, 0.0, -360.0);
    path.closeSubpath();
    path.moveTo(r3, 0.0);
    path.arcTo(-r3, -r3, 2 * r3, 2 * r3, 0.0, 360.0);
    path.lineTo(r0, 0.0);
    path.arcTo(-r2, -r2, 2 * r2, 2 * r2, 0.0, -360.0);
    path.closeSubpath();
    painter->setRenderHint(QPainter::Antialiasing, true);
    painter->setBrush(QBrush(m_color));
    painter->setPen(Qt::NoPen);
    painter->drawPath(path);
    painter->setBrush(Qt::NoBrush);
    painter->setPen(Qt::SolidLine);
    painter->setRenderHint(QPainter::Antialiasing, false);

    ItemBase::paint(painter, option, widget);
}

ItemBase *CircleItem::createNew(int size, int x, int y)
{
    return new CircleItem(size, x, y);
}

//============================================================================//
//                                 SquareItem                                 //
//============================================================================//

SquareItem::SquareItem(int size, int x, int y) : ItemBase(size, x, y)
{
    m_image = QPixmap(":/res/boxes/square.jpg");
}

void SquareItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    int dt = m_startTime.msecsTo(QTime::currentTime());
    QTransform oldTransform = painter->worldTransform();
    int dtMod = dt % 2000;
    qreal amp = 0.002 * (dtMod < 1000 ? dtMod : 2000 - dtMod) - 1.0;

    qreal scale = 0.6 + 0.2 * amp * amp;
    painter->setWorldTransform(QTransform().rotate(15.0 * amp).scale(scale, scale), true);

    painter->drawPixmap(-m_size / 2, -m_size / 2, m_size, m_size, m_image);

    painter->setWorldTransform(oldTransform, false);
    ItemBase::paint(painter, option, widget);
}

ItemBase *SquareItem::createNew(int size, int x, int y)
{
    return new SquareItem(size, x, y);
}
