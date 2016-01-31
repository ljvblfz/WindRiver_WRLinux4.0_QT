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

#ifndef JSHTMLIFrameElement_h
#define JSHTMLIFrameElement_h

#include "JSHTMLElement.h"

namespace WebCore {

class HTMLIFrameElement;

class JSHTMLIFrameElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLIFrameElement(PassRefPtr<JSC::Structure>, PassRefPtr<HTMLIFrameElement>);
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

    // Custom attributes
    void setSrc(JSC::ExecState*, JSC::JSValuePtr);
};


class JSHTMLIFrameElementPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValuePtr prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }
    JSHTMLIFrameElementPrototype(PassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
};

// Functions

JSC::JSValuePtr jsHTMLIFrameElementPrototypeFunctionGetSVGDocument(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr, const JSC::ArgList&);
// Attributes

JSC::JSValuePtr jsHTMLIFrameElementAlign(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLIFrameElementAlign(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLIFrameElementFrameBorder(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLIFrameElementFrameBorder(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLIFrameElementHeight(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLIFrameElementHeight(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLIFrameElementLongDesc(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLIFrameElementLongDesc(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLIFrameElementMarginHeight(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLIFrameElementMarginHeight(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLIFrameElementMarginWidth(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLIFrameElementMarginWidth(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLIFrameElementName(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLIFrameElementName(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLIFrameElementScrolling(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLIFrameElementScrolling(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLIFrameElementSrc(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLIFrameElementSrc(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLIFrameElementWidth(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLIFrameElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLIFrameElementContentDocument(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsHTMLIFrameElementContentWindow(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsHTMLIFrameElementConstructor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif
