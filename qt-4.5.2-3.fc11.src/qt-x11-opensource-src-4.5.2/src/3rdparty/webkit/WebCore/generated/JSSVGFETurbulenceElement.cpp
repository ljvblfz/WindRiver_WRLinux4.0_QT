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
#include "JSSVGFETurbulenceElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedInteger.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFETurbulenceElement.h"

#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFETurbulenceElement)

/* Hash table */

static const HashTableValue JSSVGFETurbulenceElementTableValues[15] =
{
    { "baseFrequencyX", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementBaseFrequencyX, (intptr_t)0 },
    { "baseFrequencyY", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementBaseFrequencyY, (intptr_t)0 },
    { "numOctaves", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementNumOctaves, (intptr_t)0 },
    { "seed", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementSeed, (intptr_t)0 },
    { "stitchTiles", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementStitchTiles, (intptr_t)0 },
    { "type", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementType, (intptr_t)0 },
    { "x", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementX, (intptr_t)0 },
    { "y", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementY, (intptr_t)0 },
    { "width", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementWidth, (intptr_t)0 },
    { "height", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementHeight, (intptr_t)0 },
    { "result", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementResult, (intptr_t)0 },
    { "className", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementClassName, (intptr_t)0 },
    { "style", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementStyle, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsSVGFETurbulenceElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGFETurbulenceElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 255, JSSVGFETurbulenceElementTableValues, 0 };
#else
    { 35, 31, JSSVGFETurbulenceElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGFETurbulenceElementConstructorTableValues[7] =
{
    { "SVG_TURBULENCE_TYPE_UNKNOWN", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementSVG_TURBULENCE_TYPE_UNKNOWN, (intptr_t)0 },
    { "SVG_TURBULENCE_TYPE_FRACTALNOISE", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementSVG_TURBULENCE_TYPE_FRACTALNOISE, (intptr_t)0 },
    { "SVG_TURBULENCE_TYPE_TURBULENCE", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementSVG_TURBULENCE_TYPE_TURBULENCE, (intptr_t)0 },
    { "SVG_STITCHTYPE_UNKNOWN", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementSVG_STITCHTYPE_UNKNOWN, (intptr_t)0 },
    { "SVG_STITCHTYPE_STITCH", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementSVG_STITCHTYPE_STITCH, (intptr_t)0 },
    { "SVG_STITCHTYPE_NOSTITCH", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementSVG_STITCHTYPE_NOSTITCH, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGFETurbulenceElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 127, JSSVGFETurbulenceElementConstructorTableValues, 0 };
#else
    { 18, 15, JSSVGFETurbulenceElementConstructorTableValues, 0 };
#endif

class JSSVGFETurbulenceElementConstructor : public DOMObject {
public:
    JSSVGFETurbulenceElementConstructor(ExecState* exec)
        : DOMObject(JSSVGFETurbulenceElementConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSSVGFETurbulenceElementPrototype::self(exec, exec->lexicalGlobalObject()), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValuePtr proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSSVGFETurbulenceElementConstructor::s_info = { "SVGFETurbulenceElementConstructor", 0, &JSSVGFETurbulenceElementConstructorTable, 0 };

bool JSSVGFETurbulenceElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFETurbulenceElementConstructor, DOMObject>(exec, &JSSVGFETurbulenceElementConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFETurbulenceElementPrototypeTableValues[8] =
{
    { "SVG_TURBULENCE_TYPE_UNKNOWN", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementSVG_TURBULENCE_TYPE_UNKNOWN, (intptr_t)0 },
    { "SVG_TURBULENCE_TYPE_FRACTALNOISE", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementSVG_TURBULENCE_TYPE_FRACTALNOISE, (intptr_t)0 },
    { "SVG_TURBULENCE_TYPE_TURBULENCE", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementSVG_TURBULENCE_TYPE_TURBULENCE, (intptr_t)0 },
    { "SVG_STITCHTYPE_UNKNOWN", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementSVG_STITCHTYPE_UNKNOWN, (intptr_t)0 },
    { "SVG_STITCHTYPE_STITCH", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementSVG_STITCHTYPE_STITCH, (intptr_t)0 },
    { "SVG_STITCHTYPE_NOSTITCH", DontDelete|ReadOnly, (intptr_t)jsSVGFETurbulenceElementSVG_STITCHTYPE_NOSTITCH, (intptr_t)0 },
    { "getPresentationAttribute", DontDelete|Function, (intptr_t)jsSVGFETurbulenceElementPrototypeFunctionGetPresentationAttribute, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGFETurbulenceElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 127, JSSVGFETurbulenceElementPrototypeTableValues, 0 };
#else
    { 18, 15, JSSVGFETurbulenceElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGFETurbulenceElementPrototype::s_info = { "SVGFETurbulenceElementPrototype", 0, &JSSVGFETurbulenceElementPrototypeTable, 0 };

JSObject* JSSVGFETurbulenceElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFETurbulenceElement>(exec, globalObject);
}

bool JSSVGFETurbulenceElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSSVGFETurbulenceElementPrototype, JSObject>(exec, &JSSVGFETurbulenceElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGFETurbulenceElement::s_info = { "SVGFETurbulenceElement", &JSSVGElement::s_info, &JSSVGFETurbulenceElementTable, 0 };

JSSVGFETurbulenceElement::JSSVGFETurbulenceElement(PassRefPtr<Structure> structure, PassRefPtr<SVGFETurbulenceElement> impl)
    : JSSVGElement(structure, impl)
{
}

JSObject* JSSVGFETurbulenceElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGFETurbulenceElementPrototype(JSSVGFETurbulenceElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFETurbulenceElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFETurbulenceElement, Base>(exec, &JSSVGFETurbulenceElementTable, this, propertyName, slot);
}

JSValuePtr jsSVGFETurbulenceElementBaseFrequencyX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFETurbulenceElement* imp = static_cast<SVGFETurbulenceElement*>(static_cast<JSSVGFETurbulenceElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->baseFrequencyXAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFETurbulenceElementBaseFrequencyY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFETurbulenceElement* imp = static_cast<SVGFETurbulenceElement*>(static_cast<JSSVGFETurbulenceElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->baseFrequencyYAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFETurbulenceElementNumOctaves(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFETurbulenceElement* imp = static_cast<SVGFETurbulenceElement*>(static_cast<JSSVGFETurbulenceElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedInteger> obj = imp->numOctavesAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFETurbulenceElementSeed(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFETurbulenceElement* imp = static_cast<SVGFETurbulenceElement*>(static_cast<JSSVGFETurbulenceElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->seedAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFETurbulenceElementStitchTiles(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFETurbulenceElement* imp = static_cast<SVGFETurbulenceElement*>(static_cast<JSSVGFETurbulenceElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedEnumeration> obj = imp->stitchTilesAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFETurbulenceElementType(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFETurbulenceElement* imp = static_cast<SVGFETurbulenceElement*>(static_cast<JSSVGFETurbulenceElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedEnumeration> obj = imp->typeAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFETurbulenceElementX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFETurbulenceElement* imp = static_cast<SVGFETurbulenceElement*>(static_cast<JSSVGFETurbulenceElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFETurbulenceElementY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFETurbulenceElement* imp = static_cast<SVGFETurbulenceElement*>(static_cast<JSSVGFETurbulenceElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFETurbulenceElementWidth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFETurbulenceElement* imp = static_cast<SVGFETurbulenceElement*>(static_cast<JSSVGFETurbulenceElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFETurbulenceElementHeight(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFETurbulenceElement* imp = static_cast<SVGFETurbulenceElement*>(static_cast<JSSVGFETurbulenceElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFETurbulenceElementResult(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFETurbulenceElement* imp = static_cast<SVGFETurbulenceElement*>(static_cast<JSSVGFETurbulenceElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFETurbulenceElementClassName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFETurbulenceElement* imp = static_cast<SVGFETurbulenceElement*>(static_cast<JSSVGFETurbulenceElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFETurbulenceElementStyle(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFETurbulenceElement* imp = static_cast<SVGFETurbulenceElement*>(static_cast<JSSVGFETurbulenceElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->style()));
}

JSValuePtr jsSVGFETurbulenceElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSSVGFETurbulenceElement*>(asObject(slot.slotBase()))->getConstructor(exec);
}
JSValuePtr JSSVGFETurbulenceElement::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSSVGFETurbulenceElementConstructor>(exec);
}

JSValuePtr jsSVGFETurbulenceElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGFETurbulenceElement::s_info))
        return throwError(exec, TypeError);
    JSSVGFETurbulenceElement* castedThisObj = static_cast<JSSVGFETurbulenceElement*>(asObject(thisValue));
    SVGFETurbulenceElement* imp = static_cast<SVGFETurbulenceElement*>(castedThisObj->impl());
    const UString& name = args.at(exec, 0)->toString(exec);


    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}

// Constant getters

JSValuePtr jsSVGFETurbulenceElementSVG_TURBULENCE_TYPE_UNKNOWN(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(0));
}

JSValuePtr jsSVGFETurbulenceElementSVG_TURBULENCE_TYPE_FRACTALNOISE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(1));
}

JSValuePtr jsSVGFETurbulenceElementSVG_TURBULENCE_TYPE_TURBULENCE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(2));
}

JSValuePtr jsSVGFETurbulenceElementSVG_STITCHTYPE_UNKNOWN(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(0));
}

JSValuePtr jsSVGFETurbulenceElementSVG_STITCHTYPE_STITCH(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(1));
}

JSValuePtr jsSVGFETurbulenceElementSVG_STITCHTYPE_NOSTITCH(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(2));
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_FILTERS)
