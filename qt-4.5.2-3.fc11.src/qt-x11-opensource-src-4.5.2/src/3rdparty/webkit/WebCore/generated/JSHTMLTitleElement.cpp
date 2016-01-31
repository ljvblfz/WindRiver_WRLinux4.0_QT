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

#include "JSHTMLTitleElement.h"

#include <wtf/GetPtr.h>

#include "HTMLTitleElement.h"
#include "KURL.h"

#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLTitleElement)

/* Hash table */

static const HashTableValue JSHTMLTitleElementTableValues[3] =
{
    { "text", DontDelete, (intptr_t)jsHTMLTitleElementText, (intptr_t)setJSHTMLTitleElementText },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsHTMLTitleElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLTitleElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1, JSHTMLTitleElementTableValues, 0 };
#else
    { 4, 3, JSHTMLTitleElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSHTMLTitleElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLTitleElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLTitleElementConstructorTableValues, 0 };
#else
    { 1, 0, JSHTMLTitleElementConstructorTableValues, 0 };
#endif

class JSHTMLTitleElementConstructor : public DOMObject {
public:
    JSHTMLTitleElementConstructor(ExecState* exec)
        : DOMObject(JSHTMLTitleElementConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSHTMLTitleElementPrototype::self(exec, exec->lexicalGlobalObject()), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValuePtr proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSHTMLTitleElementConstructor::s_info = { "HTMLTitleElementConstructor", 0, &JSHTMLTitleElementConstructorTable, 0 };

bool JSHTMLTitleElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTitleElementConstructor, DOMObject>(exec, &JSHTMLTitleElementConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLTitleElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLTitleElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLTitleElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSHTMLTitleElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSHTMLTitleElementPrototype::s_info = { "HTMLTitleElementPrototype", 0, &JSHTMLTitleElementPrototypeTable, 0 };

JSObject* JSHTMLTitleElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLTitleElement>(exec, globalObject);
}

const ClassInfo JSHTMLTitleElement::s_info = { "HTMLTitleElement", &JSHTMLElement::s_info, &JSHTMLTitleElementTable, 0 };

JSHTMLTitleElement::JSHTMLTitleElement(PassRefPtr<Structure> structure, PassRefPtr<HTMLTitleElement> impl)
    : JSHTMLElement(structure, impl)
{
}

JSObject* JSHTMLTitleElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLTitleElementPrototype(JSHTMLTitleElementPrototype::createStructure(JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLTitleElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTitleElement, Base>(exec, &JSHTMLTitleElementTable, this, propertyName, slot);
}

JSValuePtr jsHTMLTitleElementText(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    HTMLTitleElement* imp = static_cast<HTMLTitleElement*>(static_cast<JSHTMLTitleElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->text());
}

JSValuePtr jsHTMLTitleElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSHTMLTitleElement*>(asObject(slot.slotBase()))->getConstructor(exec);
}
void JSHTMLTitleElement::put(ExecState* exec, const Identifier& propertyName, JSValuePtr value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLTitleElement, Base>(exec, propertyName, value, &JSHTMLTitleElementTable, this, slot);
}

void setJSHTMLTitleElementText(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    HTMLTitleElement* imp = static_cast<HTMLTitleElement*>(static_cast<JSHTMLTitleElement*>(thisObject)->impl());
    imp->setText(valueToStringWithNullCheck(exec, value));
}

JSValuePtr JSHTMLTitleElement::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSHTMLTitleElementConstructor>(exec);
}


}
