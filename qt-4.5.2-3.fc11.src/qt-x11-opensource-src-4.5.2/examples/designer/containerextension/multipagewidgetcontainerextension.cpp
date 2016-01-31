/****************************************************************************
**
** Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the examples of the Qt Toolkit.
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
** In addition, as a special exception, Nokia gives you certain
** additional rights. These rights are described in the Nokia Qt LGPL
** Exception version 1.0, included in the file LGPL_EXCEPTION.txt in this
** package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** If you are unsure which license is appropriate for your use, please
** contact the sales department at http://www.qtsoftware.com/contact.
** $QT_END_LICENSE$
**
****************************************************************************/

#include "multipagewidgetcontainerextension.h"
#include "multipagewidget.h"

//! [0]
MultiPageWidgetContainerExtension::MultiPageWidgetContainerExtension(MultiPageWidget *widget,
                                                                     QObject *parent)
    :QObject(parent)
{
    myWidget = widget;
}
//! [0]

//! [1]
void MultiPageWidgetContainerExtension::addWidget(QWidget *widget)
{
    myWidget->addPage(widget);
}
//! [1]

//! [2]
int MultiPageWidgetContainerExtension::count() const
{
    return myWidget->count();
}
//! [2]

//! [3]
int MultiPageWidgetContainerExtension::currentIndex() const
{
    return myWidget->currentIndex();
}
//! [3]

//! [4]
void MultiPageWidgetContainerExtension::insertWidget(int index, QWidget *widget)
{
    myWidget->insertPage(index, widget);
}
//! [4]

//! [5]
void MultiPageWidgetContainerExtension::remove(int index)
{
    myWidget->removePage(index);
}
//! [5]

//! [6]
void MultiPageWidgetContainerExtension::setCurrentIndex(int index)
{
    myWidget->setCurrentIndex(index);
}
//! [6]

//! [7]
QWidget* MultiPageWidgetContainerExtension::widget(int index) const
{
    return myWidget->widget(index);
}
//! [7]
