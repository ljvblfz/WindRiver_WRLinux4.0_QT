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

#include "JSHTMLModElement.h"

#include <wtf/GetPtr.h>

#include "HTMLModElement.h"
#include "KURL.h"

#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLModElement)

/* Hash table */

static const HashTableValue JSHTMLModElementTableValues[4] =
{
    { "cite", DontDelete, (intptr_t)jsHTMLModElementCite, (intptr_t)setJSHTMLModElementCite },
    { "dateTime", DontDelete, (intptr_t)jsHTMLModElementDateTime, (intptr_t)setJSHTMLModElementDateTime },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsHTMLModElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLModElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 63, JSHTMLModElementTableValues, 0 };
#else
    { 10, 7, JSHTMLModElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSHTMLModElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLModElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLModElementConstructorTableValues, 0 };
#else
    { 1, 0, JSHTMLModElementConstructorTableValues, 0 };
#endif

class JSHTMLModElementConstructor : public DOMObject {
public:
    JSHTMLModElementConstructor(ExecState* exec)
        : DOMObject(JSHTMLModElementConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSHTMLModElementPrototype::self(exec, exec->lexicalGlobalObject()), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValuePtr proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSHTMLModElementConstructor::s_info = { "HTMLModElementConstructor", 0, &JSHTMLModElementConstructorTable, 0 };

bool JSHTMLModElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLModElementConstructor, DOMObject>(exec, &JSHTMLModElementConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLModElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLModElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLModElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSHTMLModElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSHTMLModElementPrototype::s_info = { "HTMLModElementPrototype", 0, &JSHTMLModElementPrototypeTable, 0 };

JSObject* JSHTMLModElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLModElement>(exec, globalObject);
}

const ClassInfo JSHTMLModElement::s_info = { "HTMLModElement", &JSHTMLElement::s_info, &JSHTMLModElementTable, 0 };

JSHTMLModElement::JSHTMLModElement(PassRefPtr<Structure> structure, PassRefPtr<HTMLModElement> impl)
    : JSHTMLElement(structure, impl)
{
}

JSObject* JSHTMLModElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLModElementPrototype(JSHTMLModElementPrototype::createStructure(JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLModElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLModElement, Base>(exec, &JSHTMLModElementTable, this, propertyName, slot);
}

JSValuePtr jsHTMLModElementCite(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    HTMLModElement* imp = static_cast<HTMLModElement*>(static_cast<JSHTMLModElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->cite());
}

JSValuePtr jsHTMLModElementDateTime(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    HTMLModElement* imp = static_cast<HTMLModElement*>(static_cast<JSHTMLModElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->dateTime());
}

JSValuePtr jsHTMLModElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSHTMLModElement*>(asObject(slot.slotBase()))->getConstructor(exec);
}
void JSHTMLModElement::put(ExecState* exec, const Identifier& propertyName, JSValuePtr value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLModElement, Base>(exec, propertyName, value, &JSHTMLModElementTable, this, slot);
}

void setJSHTMLModElementCite(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    HTMLModElement* imp = static_cast<HTMLModElement*>(static_cast<JSHTMLModElement*>(thisObject)->impl());
    imp->setCite(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLModElementDateTime(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    HTMLModElement* imp = static_cast<HTMLModElement*>(static_cast<JSHTMLModElement*>(thisObject)->impl());
    imp->setDateTime(valueToStringWithNullCheck(exec, value));
}

JSValuePtr JSHTMLModElement::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSHTMLModElementConstructor>(exec);
}


}
