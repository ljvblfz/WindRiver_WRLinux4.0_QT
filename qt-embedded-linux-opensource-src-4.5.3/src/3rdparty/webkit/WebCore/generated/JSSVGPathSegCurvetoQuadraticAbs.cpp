/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"


#if ENABLE(SVG)

#include "SVGElement.h"
#include "JSSVGPathSegCurvetoQuadraticAbs.h"

#include <wtf/GetPtr.h>

#include "SVGPathSegCurvetoQuadratic.h"

#include <runtime/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPathSegCurvetoQuadraticAbs)

/* Hash table */

static const HashTableValue JSSVGPathSegCurvetoQuadraticAbsTableValues[5] =
{
    { "x", DontDelete, (intptr_t)jsSVGPathSegCurvetoQuadraticAbsX, (intptr_t)setJSSVGPathSegCurvetoQuadraticAbsX },
    { "y", DontDelete, (intptr_t)jsSVGPathSegCurvetoQuadraticAbsY, (intptr_t)setJSSVGPathSegCurvetoQuadraticAbsY },
    { "x1", DontDelete, (intptr_t)jsSVGPathSegCurvetoQuadraticAbsX1, (intptr_t)setJSSVGPathSegCurvetoQuadraticAbsX1 },
    { "y1", DontDelete, (intptr_t)jsSVGPathSegCurvetoQuadraticAbsY1, (intptr_t)setJSSVGPathSegCurvetoQuadraticAbsY1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPathSegCurvetoQuadraticAbsTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 3, JSSVGPathSegCurvetoQuadraticAbsTableValues, 0 };
#else
    { 8, 7, JSSVGPathSegCurvetoQuadraticAbsTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegCurvetoQuadraticAbsPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPathSegCurvetoQuadraticAbsPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGPathSegCurvetoQuadraticAbsPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGPathSegCurvetoQuadraticAbsPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGPathSegCurvetoQuadraticAbsPrototype::s_info = { "SVGPathSegCurvetoQuadraticAbsPrototype", 0, &JSSVGPathSegCurvetoQuadraticAbsPrototypeTable, 0 };

JSObject* JSSVGPathSegCurvetoQuadraticAbsPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegCurvetoQuadraticAbs>(exec, globalObject);
}

const ClassInfo JSSVGPathSegCurvetoQuadraticAbs::s_info = { "SVGPathSegCurvetoQuadraticAbs", &JSSVGPathSeg::s_info, &JSSVGPathSegCurvetoQuadraticAbsTable, 0 };

JSSVGPathSegCurvetoQuadraticAbs::JSSVGPathSegCurvetoQuadraticAbs(PassRefPtr<Structure> structure, PassRefPtr<SVGPathSegCurvetoQuadraticAbs> impl, SVGElement* context)
    : JSSVGPathSeg(structure, impl, context)
{
}

JSObject* JSSVGPathSegCurvetoQuadraticAbs::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGPathSegCurvetoQuadraticAbsPrototype(JSSVGPathSegCurvetoQuadraticAbsPrototype::createStructure(JSSVGPathSegPrototype::self(exec, globalObject)));
}

bool JSSVGPathSegCurvetoQuadraticAbs::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegCurvetoQuadraticAbs, Base>(exec, &JSSVGPathSegCurvetoQuadraticAbsTable, this, propertyName, slot);
}

JSValuePtr jsSVGPathSegCurvetoQuadraticAbsX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGPathSegCurvetoQuadraticAbs* imp = static_cast<SVGPathSegCurvetoQuadraticAbs*>(static_cast<JSSVGPathSegCurvetoQuadraticAbs*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->x());
}

JSValuePtr jsSVGPathSegCurvetoQuadraticAbsY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGPathSegCurvetoQuadraticAbs* imp = static_cast<SVGPathSegCurvetoQuadraticAbs*>(static_cast<JSSVGPathSegCurvetoQuadraticAbs*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->y());
}

JSValuePtr jsSVGPathSegCurvetoQuadraticAbsX1(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGPathSegCurvetoQuadraticAbs* imp = static_cast<SVGPathSegCurvetoQuadraticAbs*>(static_cast<JSSVGPathSegCurvetoQuadraticAbs*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->x1());
}

JSValuePtr jsSVGPathSegCurvetoQuadraticAbsY1(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGPathSegCurvetoQuadraticAbs* imp = static_cast<SVGPathSegCurvetoQuadraticAbs*>(static_cast<JSSVGPathSegCurvetoQuadraticAbs*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->y1());
}

void JSSVGPathSegCurvetoQuadraticAbs::put(ExecState* exec, const Identifier& propertyName, JSValuePtr value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPathSegCurvetoQuadraticAbs, Base>(exec, propertyName, value, &JSSVGPathSegCurvetoQuadraticAbsTable, this, slot);
}

void setJSSVGPathSegCurvetoQuadraticAbsX(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    SVGPathSegCurvetoQuadraticAbs* imp = static_cast<SVGPathSegCurvetoQuadraticAbs*>(static_cast<JSSVGPathSegCurvetoQuadraticAbs*>(thisObject)->impl());
    imp->setX(value->toFloat(exec));
    if (static_cast<JSSVGPathSegCurvetoQuadraticAbs*>(thisObject)->context())
        static_cast<JSSVGPathSegCurvetoQuadraticAbs*>(thisObject)->context()->svgAttributeChanged(static_cast<JSSVGPathSegCurvetoQuadraticAbs*>(thisObject)->impl()->associatedAttributeName());
}

void setJSSVGPathSegCurvetoQuadraticAbsY(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    SVGPathSegCurvetoQuadraticAbs* imp = static_cast<SVGPathSegCurvetoQuadraticAbs*>(static_cast<JSSVGPathSegCurvetoQuadraticAbs*>(thisObject)->impl());
    imp->setY(value->toFloat(exec));
    if (static_cast<JSSVGPathSegCurvetoQuadraticAbs*>(thisObject)->context())
        static_cast<JSSVGPathSegCurvetoQuadraticAbs*>(thisObject)->context()->svgAttributeChanged(static_cast<JSSVGPathSegCurvetoQuadraticAbs*>(thisObject)->impl()->associatedAttributeName());
}

void setJSSVGPathSegCurvetoQuadraticAbsX1(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    SVGPathSegCurvetoQuadraticAbs* imp = static_cast<SVGPathSegCurvetoQuadraticAbs*>(static_cast<JSSVGPathSegCurvetoQuadraticAbs*>(thisObject)->impl());
    imp->setX1(value->toFloat(exec));
    if (static_cast<JSSVGPathSegCurvetoQuadraticAbs*>(thisObject)->context())
        static_cast<JSSVGPathSegCurvetoQuadraticAbs*>(thisObject)->context()->svgAttributeChanged(static_cast<JSSVGPathSegCurvetoQuadraticAbs*>(thisObject)->impl()->associatedAttributeName());
}

void setJSSVGPathSegCurvetoQuadraticAbsY1(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    SVGPathSegCurvetoQuadraticAbs* imp = static_cast<SVGPathSegCurvetoQuadraticAbs*>(static_cast<JSSVGPathSegCurvetoQuadraticAbs*>(thisObject)->impl());
    imp->setY1(value->toFloat(exec));
    if (static_cast<JSSVGPathSegCurvetoQuadraticAbs*>(thisObject)->context())
        static_cast<JSSVGPathSegCurvetoQuadraticAbs*>(thisObject)->context()->svgAttributeChanged(static_cast<JSSVGPathSegCurvetoQuadraticAbs*>(thisObject)->impl()->associatedAttributeName());
}


}

#endif // ENABLE(SVG)
