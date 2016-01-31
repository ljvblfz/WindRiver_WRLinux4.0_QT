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

#ifndef JSSVGFEFuncBElement_h
#define JSSVGFEFuncBElement_h


#if ENABLE(SVG) && ENABLE(SVG_FILTERS)

#include "JSSVGComponentTransferFunctionElement.h"

namespace WebCore {

class SVGFEFuncBElement;

class JSSVGFEFuncBElement : public JSSVGComponentTransferFunctionElement {
    typedef JSSVGComponentTransferFunctionElement Base;
public:
    JSSVGFEFuncBElement(PassRefPtr<JSC::Structure>, PassRefPtr<SVGFEFuncBElement>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

};


class JSSVGFEFuncBElementPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    JSSVGFEFuncBElementPrototype(PassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
};


} // namespace WebCore

#endif // ENABLE(SVG) && ENABLE(SVG_FILTERS)

#endif
