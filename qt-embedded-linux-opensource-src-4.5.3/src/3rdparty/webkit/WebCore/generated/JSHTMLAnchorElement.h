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

#ifndef JSHTMLAnchorElement_h
#define JSHTMLAnchorElement_h

#include "JSHTMLElement.h"

namespace WebCore {

class HTMLAnchorElement;

class JSHTMLAnchorElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLAnchorElement(PassRefPtr<JSC::Structure>, PassRefPtr<HTMLAnchorElement>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValuePtr, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValuePtr prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }

    static JSC::JSValuePtr getConstructor(JSC::ExecState*);
};


class JSHTMLAnchorElementPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValuePtr prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }
    JSHTMLAnchorElementPrototype(PassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
};

// Functions

JSC::JSValuePtr jsHTMLAnchorElementPrototypeFunctionToString(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr, const JSC::ArgList&);
// Attributes

JSC::JSValuePtr jsHTMLAnchorElementAccessKey(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementAccessKey(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLAnchorElementCharset(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementCharset(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLAnchorElementCoords(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementCoords(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLAnchorElementHref(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementHref(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLAnchorElementHreflang(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementHreflang(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLAnchorElementName(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementName(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLAnchorElementRel(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementRel(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLAnchorElementRev(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementRev(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLAnchorElementShape(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementShape(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLAnchorElementTarget(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementTarget(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLAnchorElementType(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLAnchorElementType(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLAnchorElementHash(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsHTMLAnchorElementHost(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsHTMLAnchorElementHostname(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsHTMLAnchorElementPathname(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsHTMLAnchorElementPort(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsHTMLAnchorElementProtocol(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsHTMLAnchorElementSearch(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsHTMLAnchorElementText(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsHTMLAnchorElementConstructor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif
