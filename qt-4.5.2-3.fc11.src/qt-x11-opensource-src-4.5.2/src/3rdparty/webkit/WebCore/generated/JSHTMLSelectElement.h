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

#ifndef JSHTMLSelectElement_h
#define JSHTMLSelectElement_h

#include "JSHTMLElement.h"

namespace WebCore {

class HTMLSelectElement;

class JSHTMLSelectElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLSelectElement(PassRefPtr<JSC::Structure>, PassRefPtr<HTMLSelectElement>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertySlot(JSC::ExecState*, unsigned propertyName, JSC::PropertySlot&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValuePtr, JSC::PutPropertySlot&);
    virtual void put(JSC::ExecState*, unsigned propertyName, JSC::JSValuePtr);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValuePtr prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }

    virtual void getPropertyNames(JSC::ExecState*, JSC::PropertyNameArray&);
    static JSC::JSValuePtr getConstructor(JSC::ExecState*);

    // Custom functions
    JSC::JSValuePtr remove(JSC::ExecState*, const JSC::ArgList&);
    static JSC::JSValuePtr indexGetter(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
    void indexSetter(JSC::ExecState*, unsigned index, JSC::JSValuePtr);
};


class JSHTMLSelectElementPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValuePtr prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }
    JSHTMLSelectElementPrototype(PassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
};

// Functions

JSC::JSValuePtr jsHTMLSelectElementPrototypeFunctionAdd(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr, const JSC::ArgList&);
JSC::JSValuePtr jsHTMLSelectElementPrototypeFunctionRemove(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr, const JSC::ArgList&);
JSC::JSValuePtr jsHTMLSelectElementPrototypeFunctionItem(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr, const JSC::ArgList&);
JSC::JSValuePtr jsHTMLSelectElementPrototypeFunctionNamedItem(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr, const JSC::ArgList&);
// Attributes

JSC::JSValuePtr jsHTMLSelectElementType(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsHTMLSelectElementSelectedIndex(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLSelectElementSelectedIndex(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLSelectElementValue(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLSelectElementValue(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLSelectElementLength(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLSelectElementLength(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLSelectElementForm(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsHTMLSelectElementWillValidate(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsHTMLSelectElementOptions(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsHTMLSelectElementDisabled(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLSelectElementDisabled(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLSelectElementAutofocus(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLSelectElementAutofocus(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLSelectElementMultiple(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLSelectElementMultiple(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLSelectElementName(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLSelectElementName(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLSelectElementSize(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLSelectElementSize(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLSelectElementConstructor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif
