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

#include "JSElement.h"

#include <wtf/GetPtr.h>

#include "Attr.h"
#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "Element.h"
#include "JSAttr.h"
#include "JSCSSStyleDeclaration.h"
#include "JSElement.h"
#include "JSNodeList.h"
#include "KURL.h"
#include "NameNodeList.h"
#include "NodeList.h"

#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSElement)

/* Hash table */

static const HashTableValue JSElementTableValues[22] =
{
    { "tagName", DontDelete|ReadOnly, (intptr_t)jsElementTagName, (intptr_t)0 },
    { "style", DontDelete|ReadOnly, (intptr_t)jsElementStyle, (intptr_t)0 },
    { "offsetLeft", DontDelete|ReadOnly, (intptr_t)jsElementOffsetLeft, (intptr_t)0 },
    { "offsetTop", DontDelete|ReadOnly, (intptr_t)jsElementOffsetTop, (intptr_t)0 },
    { "offsetWidth", DontDelete|ReadOnly, (intptr_t)jsElementOffsetWidth, (intptr_t)0 },
    { "offsetHeight", DontDelete|ReadOnly, (intptr_t)jsElementOffsetHeight, (intptr_t)0 },
    { "offsetParent", DontDelete|ReadOnly, (intptr_t)jsElementOffsetParent, (intptr_t)0 },
    { "clientLeft", DontDelete|ReadOnly, (intptr_t)jsElementClientLeft, (intptr_t)0 },
    { "clientTop", DontDelete|ReadOnly, (intptr_t)jsElementClientTop, (intptr_t)0 },
    { "clientWidth", DontDelete|ReadOnly, (intptr_t)jsElementClientWidth, (intptr_t)0 },
    { "clientHeight", DontDelete|ReadOnly, (intptr_t)jsElementClientHeight, (intptr_t)0 },
    { "scrollLeft", DontDelete, (intptr_t)jsElementScrollLeft, (intptr_t)setJSElementScrollLeft },
    { "scrollTop", DontDelete, (intptr_t)jsElementScrollTop, (intptr_t)setJSElementScrollTop },
    { "scrollWidth", DontDelete|ReadOnly, (intptr_t)jsElementScrollWidth, (intptr_t)0 },
    { "scrollHeight", DontDelete|ReadOnly, (intptr_t)jsElementScrollHeight, (intptr_t)0 },
    { "firstElementChild", DontDelete|ReadOnly, (intptr_t)jsElementFirstElementChild, (intptr_t)0 },
    { "lastElementChild", DontDelete|ReadOnly, (intptr_t)jsElementLastElementChild, (intptr_t)0 },
    { "previousElementSibling", DontDelete|ReadOnly, (intptr_t)jsElementPreviousElementSibling, (intptr_t)0 },
    { "nextElementSibling", DontDelete|ReadOnly, (intptr_t)jsElementNextElementSibling, (intptr_t)0 },
    { "childElementCount", DontDelete|ReadOnly, (intptr_t)jsElementChildElementCount, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 8191, JSElementTableValues, 0 };
#else
    { 68, 63, JSElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSElementConstructorTableValues, 0 };
#else
    { 1, 0, JSElementConstructorTableValues, 0 };
#endif

class JSElementConstructor : public DOMObject {
public:
    JSElementConstructor(ExecState* exec)
        : DOMObject(JSElementConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSElementPrototype::self(exec, exec->lexicalGlobalObject()), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValuePtr proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSElementConstructor::s_info = { "ElementConstructor", 0, &JSElementConstructorTable, 0 };

bool JSElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSElementConstructor, DOMObject>(exec, &JSElementConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSElementPrototypeTableValues[26] =
{
    { "getAttribute", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionGetAttribute, (intptr_t)1 },
    { "setAttribute", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionSetAttribute, (intptr_t)2 },
    { "removeAttribute", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionRemoveAttribute, (intptr_t)1 },
    { "getAttributeNode", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionGetAttributeNode, (intptr_t)1 },
    { "setAttributeNode", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionSetAttributeNode, (intptr_t)1 },
    { "removeAttributeNode", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionRemoveAttributeNode, (intptr_t)1 },
    { "getElementsByTagName", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionGetElementsByTagName, (intptr_t)1 },
    { "getAttributeNS", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionGetAttributeNS, (intptr_t)2 },
    { "setAttributeNS", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionSetAttributeNS, (intptr_t)3 },
    { "removeAttributeNS", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionRemoveAttributeNS, (intptr_t)2 },
    { "getElementsByTagNameNS", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionGetElementsByTagNameNS, (intptr_t)2 },
    { "getAttributeNodeNS", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionGetAttributeNodeNS, (intptr_t)2 },
    { "setAttributeNodeNS", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionSetAttributeNodeNS, (intptr_t)1 },
    { "hasAttribute", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionHasAttribute, (intptr_t)1 },
    { "hasAttributeNS", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionHasAttributeNS, (intptr_t)2 },
    { "focus", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionFocus, (intptr_t)0 },
    { "blur", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionBlur, (intptr_t)0 },
    { "scrollIntoView", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionScrollIntoView, (intptr_t)1 },
    { "contains", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionContains, (intptr_t)1 },
    { "scrollIntoViewIfNeeded", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionScrollIntoViewIfNeeded, (intptr_t)1 },
    { "scrollByLines", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionScrollByLines, (intptr_t)1 },
    { "scrollByPages", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionScrollByPages, (intptr_t)1 },
    { "getElementsByClassName", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionGetElementsByClassName, (intptr_t)1 },
    { "querySelector", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionQuerySelector, (intptr_t)1 },
    { "querySelectorAll", DontDelete|Function, (intptr_t)jsElementPrototypeFunctionQuerySelectorAll, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1023, JSElementPrototypeTableValues, 0 };
#else
    { 68, 63, JSElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSElementPrototype::s_info = { "ElementPrototype", 0, &JSElementPrototypeTable, 0 };

JSObject* JSElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSElement>(exec, globalObject);
}

bool JSElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSElement::s_info = { "Element", &JSEventTargetNode::s_info, &JSElementTable, 0 };

JSElement::JSElement(PassRefPtr<Structure> structure, PassRefPtr<Element> impl)
    : JSEventTargetNode(structure, impl)
{
}

JSObject* JSElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSElementPrototype(JSElementPrototype::createStructure(JSEventTargetNodePrototype::self(exec, globalObject)));
}

JSValuePtr jsElementTagName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsStringOrNull(exec, imp->tagName());
}

JSValuePtr jsElementStyle(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->style()));
}

JSValuePtr jsElementOffsetLeft(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->offsetLeft());
}

JSValuePtr jsElementOffsetTop(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->offsetTop());
}

JSValuePtr jsElementOffsetWidth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->offsetWidth());
}

JSValuePtr jsElementOffsetHeight(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->offsetHeight());
}

JSValuePtr jsElementOffsetParent(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->offsetParent()));
}

JSValuePtr jsElementClientLeft(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->clientLeft());
}

JSValuePtr jsElementClientTop(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->clientTop());
}

JSValuePtr jsElementClientWidth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->clientWidth());
}

JSValuePtr jsElementClientHeight(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->clientHeight());
}

JSValuePtr jsElementScrollLeft(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->scrollLeft());
}

JSValuePtr jsElementScrollTop(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->scrollTop());
}

JSValuePtr jsElementScrollWidth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->scrollWidth());
}

JSValuePtr jsElementScrollHeight(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->scrollHeight());
}

JSValuePtr jsElementFirstElementChild(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->firstElementChild()));
}

JSValuePtr jsElementLastElementChild(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->lastElementChild()));
}

JSValuePtr jsElementPreviousElementSibling(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->previousElementSibling()));
}

JSValuePtr jsElementNextElementSibling(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->nextElementSibling()));
}

JSValuePtr jsElementChildElementCount(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->childElementCount());
}

JSValuePtr jsElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSElement*>(asObject(slot.slotBase()))->getConstructor(exec);
}
void JSElement::put(ExecState* exec, const Identifier& propertyName, JSValuePtr value, PutPropertySlot& slot)
{
    lookupPut<JSElement, Base>(exec, propertyName, value, &JSElementTable, this, slot);
}

void setJSElementScrollLeft(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(thisObject)->impl());
    imp->setScrollLeft(value->toInt32(exec));
}

void setJSElementScrollTop(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    Element* imp = static_cast<Element*>(static_cast<JSElement*>(thisObject)->impl());
    imp->setScrollTop(value->toInt32(exec));
}

JSValuePtr JSElement::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSElementConstructor>(exec);
}

JSValuePtr jsElementPrototypeFunctionGetAttribute(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& name = args.at(exec, 0)->toString(exec);


    JSC::JSValuePtr result = jsStringOrNull(exec, imp->getAttribute(name));
    return result;
}

JSValuePtr jsElementPrototypeFunctionSetAttribute(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    return castedThisObj->setAttribute(exec, args);
}

JSValuePtr jsElementPrototypeFunctionRemoveAttribute(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& name = args.at(exec, 0)->toString(exec);

    imp->removeAttribute(name, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValuePtr jsElementPrototypeFunctionGetAttributeNode(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& name = args.at(exec, 0)->toString(exec);


    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->getAttributeNode(name)));
    return result;
}

JSValuePtr jsElementPrototypeFunctionSetAttributeNode(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    return castedThisObj->setAttributeNode(exec, args);
}

JSValuePtr jsElementPrototypeFunctionRemoveAttributeNode(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Attr* oldAttr = toAttr(args.at(exec, 0));


    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->removeAttributeNode(oldAttr, ec)));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsElementPrototypeFunctionGetElementsByTagName(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& name = args.at(exec, 0)->toString(exec);


    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->getElementsByTagName(name)));
    return result;
}

JSValuePtr jsElementPrototypeFunctionGetAttributeNS(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& namespaceURI = valueToStringWithNullCheck(exec, args.at(exec, 0));
    const UString& localName = args.at(exec, 1)->toString(exec);


    JSC::JSValuePtr result = jsString(exec, imp->getAttributeNS(namespaceURI, localName));
    return result;
}

JSValuePtr jsElementPrototypeFunctionSetAttributeNS(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    return castedThisObj->setAttributeNS(exec, args);
}

JSValuePtr jsElementPrototypeFunctionRemoveAttributeNS(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& namespaceURI = valueToStringWithNullCheck(exec, args.at(exec, 0));
    const UString& localName = args.at(exec, 1)->toString(exec);

    imp->removeAttributeNS(namespaceURI, localName, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValuePtr jsElementPrototypeFunctionGetElementsByTagNameNS(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& namespaceURI = valueToStringWithNullCheck(exec, args.at(exec, 0));
    const UString& localName = args.at(exec, 1)->toString(exec);


    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->getElementsByTagNameNS(namespaceURI, localName)));
    return result;
}

JSValuePtr jsElementPrototypeFunctionGetAttributeNodeNS(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& namespaceURI = valueToStringWithNullCheck(exec, args.at(exec, 0));
    const UString& localName = args.at(exec, 1)->toString(exec);


    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->getAttributeNodeNS(namespaceURI, localName)));
    return result;
}

JSValuePtr jsElementPrototypeFunctionSetAttributeNodeNS(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    return castedThisObj->setAttributeNodeNS(exec, args);
}

JSValuePtr jsElementPrototypeFunctionHasAttribute(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& name = args.at(exec, 0)->toString(exec);


    JSC::JSValuePtr result = jsBoolean(imp->hasAttribute(name));
    return result;
}

JSValuePtr jsElementPrototypeFunctionHasAttributeNS(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& namespaceURI = valueToStringWithNullCheck(exec, args.at(exec, 0));
    const UString& localName = args.at(exec, 1)->toString(exec);


    JSC::JSValuePtr result = jsBoolean(imp->hasAttributeNS(namespaceURI, localName));
    return result;
}

JSValuePtr jsElementPrototypeFunctionFocus(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());

    imp->focus();
    return jsUndefined();
}

JSValuePtr jsElementPrototypeFunctionBlur(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());

    imp->blur();
    return jsUndefined();
}

JSValuePtr jsElementPrototypeFunctionScrollIntoView(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());

    int argsCount = args.size();
    if (argsCount < 1) {
        imp->scrollIntoView();
        return jsUndefined();
    }

    bool alignWithTop = args.at(exec, 0)->toBoolean(exec);

    imp->scrollIntoView(alignWithTop);
    return jsUndefined();
}

JSValuePtr jsElementPrototypeFunctionContains(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    Element* element = toElement(args.at(exec, 0));


    JSC::JSValuePtr result = jsBoolean(imp->contains(element));
    return result;
}

JSValuePtr jsElementPrototypeFunctionScrollIntoViewIfNeeded(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());

    int argsCount = args.size();
    if (argsCount < 1) {
        imp->scrollIntoViewIfNeeded();
        return jsUndefined();
    }

    bool centerIfNeeded = args.at(exec, 0)->toBoolean(exec);

    imp->scrollIntoViewIfNeeded(centerIfNeeded);
    return jsUndefined();
}

JSValuePtr jsElementPrototypeFunctionScrollByLines(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    int lines = args.at(exec, 0)->toInt32(exec);

    imp->scrollByLines(lines);
    return jsUndefined();
}

JSValuePtr jsElementPrototypeFunctionScrollByPages(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    int pages = args.at(exec, 0)->toInt32(exec);

    imp->scrollByPages(pages);
    return jsUndefined();
}

JSValuePtr jsElementPrototypeFunctionGetElementsByClassName(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    const UString& name = args.at(exec, 0)->toString(exec);


    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->getElementsByClassName(name)));
    return result;
}

JSValuePtr jsElementPrototypeFunctionQuerySelector(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& selectors = valueToStringWithUndefinedOrNullCheck(exec, args.at(exec, 0));


    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->querySelector(selectors, ec)));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsElementPrototypeFunctionQuerySelectorAll(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSElement::s_info))
        return throwError(exec, TypeError);
    JSElement* castedThisObj = static_cast<JSElement*>(asObject(thisValue));
    Element* imp = static_cast<Element*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& selectors = valueToStringWithUndefinedOrNullCheck(exec, args.at(exec, 0));


    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->querySelectorAll(selectors, ec)));
    setDOMException(exec, ec);
    return result;
}

Element* toElement(JSC::JSValuePtr value)
{
    return value->isObject(&JSElement::s_info) ? static_cast<JSElement*>(asObject(value))->impl() : 0;
}

}
