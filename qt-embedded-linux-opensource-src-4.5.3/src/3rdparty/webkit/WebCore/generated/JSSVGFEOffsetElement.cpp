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


#if ENABLE(SVG) && ENABLE(SVG_FILTERS)

#include "SVGElement.h"
#include "JSSVGFEOffsetElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEOffsetElement.h"

#include <runtime/Error.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFEOffsetElement)

/* Hash table */

static const HashTableValue JSSVGFEOffsetElementTableValues[11] =
{
    { "in1", DontDelete|ReadOnly, (intptr_t)jsSVGFEOffsetElementIn1, (intptr_t)0 },
    { "dx", DontDelete|ReadOnly, (intptr_t)jsSVGFEOffsetElementDx, (intptr_t)0 },
    { "dy", DontDelete|ReadOnly, (intptr_t)jsSVGFEOffsetElementDy, (intptr_t)0 },
    { "x", DontDelete|ReadOnly, (intptr_t)jsSVGFEOffsetElementX, (intptr_t)0 },
    { "y", DontDelete|ReadOnly, (intptr_t)jsSVGFEOffsetElementY, (intptr_t)0 },
    { "width", DontDelete|ReadOnly, (intptr_t)jsSVGFEOffsetElementWidth, (intptr_t)0 },
    { "height", DontDelete|ReadOnly, (intptr_t)jsSVGFEOffsetElementHeight, (intptr_t)0 },
    { "result", DontDelete|ReadOnly, (intptr_t)jsSVGFEOffsetElementResult, (intptr_t)0 },
    { "className", DontDelete|ReadOnly, (intptr_t)jsSVGFEOffsetElementClassName, (intptr_t)0 },
    { "style", DontDelete|ReadOnly, (intptr_t)jsSVGFEOffsetElementStyle, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGFEOffsetElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 255, JSSVGFEOffsetElementTableValues, 0 };
#else
    { 35, 31, JSSVGFEOffsetElementTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGFEOffsetElementPrototypeTableValues[2] =
{
    { "getPresentationAttribute", DontDelete|Function, (intptr_t)jsSVGFEOffsetElementPrototypeFunctionGetPresentationAttribute, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGFEOffsetElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGFEOffsetElementPrototypeTableValues, 0 };
#else
    { 2, 1, JSSVGFEOffsetElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGFEOffsetElementPrototype::s_info = { "SVGFEOffsetElementPrototype", 0, &JSSVGFEOffsetElementPrototypeTable, 0 };

JSObject* JSSVGFEOffsetElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEOffsetElement>(exec, globalObject);
}

bool JSSVGFEOffsetElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGFEOffsetElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGFEOffsetElement::s_info = { "SVGFEOffsetElement", &JSSVGElement::s_info, &JSSVGFEOffsetElementTable, 0 };

JSSVGFEOffsetElement::JSSVGFEOffsetElement(PassRefPtr<Structure> structure, PassRefPtr<SVGFEOffsetElement> impl)
    : JSSVGElement(structure, impl)
{
}

JSObject* JSSVGFEOffsetElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGFEOffsetElementPrototype(JSSVGFEOffsetElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFEOffsetElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEOffsetElement, Base>(exec, &JSSVGFEOffsetElementTable, this, propertyName, slot);
}

JSValuePtr jsSVGFEOffsetElementIn1(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(static_cast<JSSVGFEOffsetElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedString> obj = imp->in1Animated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFEOffsetElementDx(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(static_cast<JSSVGFEOffsetElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->dxAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFEOffsetElementDy(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(static_cast<JSSVGFEOffsetElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->dyAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFEOffsetElementX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(static_cast<JSSVGFEOffsetElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFEOffsetElementY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(static_cast<JSSVGFEOffsetElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFEOffsetElementWidth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(static_cast<JSSVGFEOffsetElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFEOffsetElementHeight(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(static_cast<JSSVGFEOffsetElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFEOffsetElementResult(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(static_cast<JSSVGFEOffsetElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFEOffsetElementClassName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(static_cast<JSSVGFEOffsetElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFEOffsetElementStyle(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(static_cast<JSSVGFEOffsetElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->style()));
}

JSValuePtr jsSVGFEOffsetElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGFEOffsetElement::s_info))
        return throwError(exec, TypeError);
    JSSVGFEOffsetElement* castedThisObj = static_cast<JSSVGFEOffsetElement*>(asObject(thisValue));
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(castedThisObj->impl());
    const UString& name = args.at(exec, 0)->toString(exec);


    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_FILTERS)
