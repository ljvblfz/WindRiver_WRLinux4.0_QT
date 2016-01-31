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

#include "JSStyleSheet.h"

#include <wtf/GetPtr.h>

#include "JSMediaList.h"
#include "JSNode.h"
#include "JSStyleSheet.h"
#include "KURL.h"
#include "MediaList.h"
#include "Node.h"
#include "StyleSheet.h"

#include <runtime/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSStyleSheet)

/* Hash table */

static const HashTableValue JSStyleSheetTableValues[9] =
{
    { "type", DontDelete|ReadOnly, (intptr_t)jsStyleSheetType, (intptr_t)0 },
    { "disabled", DontDelete, (intptr_t)jsStyleSheetDisabled, (intptr_t)setJSStyleSheetDisabled },
    { "ownerNode", DontDelete|ReadOnly, (intptr_t)jsStyleSheetOwnerNode, (intptr_t)0 },
    { "parentStyleSheet", DontDelete|ReadOnly, (intptr_t)jsStyleSheetParentStyleSheet, (intptr_t)0 },
    { "href", DontDelete|ReadOnly, (intptr_t)jsStyleSheetHref, (intptr_t)0 },
    { "title", DontDelete|ReadOnly, (intptr_t)jsStyleSheetTitle, (intptr_t)0 },
    { "media", DontDelete|ReadOnly, (intptr_t)jsStyleSheetMedia, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsStyleSheetConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSStyleSheetTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 31, JSStyleSheetTableValues, 0 };
#else
    { 17, 15, JSStyleSheetTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSStyleSheetConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSStyleSheetConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSStyleSheetConstructorTableValues, 0 };
#else
    { 1, 0, JSStyleSheetConstructorTableValues, 0 };
#endif

class JSStyleSheetConstructor : public DOMObject {
public:
    JSStyleSheetConstructor(ExecState* exec)
        : DOMObject(JSStyleSheetConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSStyleSheetPrototype::self(exec, exec->lexicalGlobalObject()), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValuePtr proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSStyleSheetConstructor::s_info = { "StyleSheetConstructor", 0, &JSStyleSheetConstructorTable, 0 };

bool JSStyleSheetConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSStyleSheetConstructor, DOMObject>(exec, &JSStyleSheetConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSStyleSheetPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSStyleSheetPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSStyleSheetPrototypeTableValues, 0 };
#else
    { 1, 0, JSStyleSheetPrototypeTableValues, 0 };
#endif

const ClassInfo JSStyleSheetPrototype::s_info = { "StyleSheetPrototype", 0, &JSStyleSheetPrototypeTable, 0 };

JSObject* JSStyleSheetPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSStyleSheet>(exec, globalObject);
}

const ClassInfo JSStyleSheet::s_info = { "StyleSheet", 0, &JSStyleSheetTable, 0 };

JSStyleSheet::JSStyleSheet(PassRefPtr<Structure> structure, PassRefPtr<StyleSheet> impl)
    : DOMObject(structure)
    , m_impl(impl)
{
}

JSStyleSheet::~JSStyleSheet()
{
    forgetDOMObject(*Heap::heap(this)->globalData(), m_impl.get());

}

JSObject* JSStyleSheet::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSStyleSheetPrototype(JSStyleSheetPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSStyleSheet::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSStyleSheet, Base>(exec, &JSStyleSheetTable, this, propertyName, slot);
}

JSValuePtr jsStyleSheetType(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    StyleSheet* imp = static_cast<StyleSheet*>(static_cast<JSStyleSheet*>(asObject(slot.slotBase()))->impl());
    return jsStringOrNull(exec, imp->type());
}

JSValuePtr jsStyleSheetDisabled(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    StyleSheet* imp = static_cast<StyleSheet*>(static_cast<JSStyleSheet*>(asObject(slot.slotBase()))->impl());
    return jsBoolean(imp->disabled());
}

JSValuePtr jsStyleSheetOwnerNode(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    StyleSheet* imp = static_cast<StyleSheet*>(static_cast<JSStyleSheet*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->ownerNode()));
}

JSValuePtr jsStyleSheetParentStyleSheet(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    StyleSheet* imp = static_cast<StyleSheet*>(static_cast<JSStyleSheet*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->parentStyleSheet()));
}

JSValuePtr jsStyleSheetHref(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    StyleSheet* imp = static_cast<StyleSheet*>(static_cast<JSStyleSheet*>(asObject(slot.slotBase()))->impl());
    return jsStringOrNull(exec, imp->href());
}

JSValuePtr jsStyleSheetTitle(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    StyleSheet* imp = static_cast<StyleSheet*>(static_cast<JSStyleSheet*>(asObject(slot.slotBase()))->impl());
    return jsStringOrNull(exec, imp->title());
}

JSValuePtr jsStyleSheetMedia(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    StyleSheet* imp = static_cast<StyleSheet*>(static_cast<JSStyleSheet*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->media()));
}

JSValuePtr jsStyleSheetConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSStyleSheet*>(asObject(slot.slotBase()))->getConstructor(exec);
}
void JSStyleSheet::put(ExecState* exec, const Identifier& propertyName, JSValuePtr value, PutPropertySlot& slot)
{
    lookupPut<JSStyleSheet, Base>(exec, propertyName, value, &JSStyleSheetTable, this, slot);
}

void setJSStyleSheetDisabled(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    StyleSheet* imp = static_cast<StyleSheet*>(static_cast<JSStyleSheet*>(thisObject)->impl());
    imp->setDisabled(value->toBoolean(exec));
}

JSValuePtr JSStyleSheet::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSStyleSheetConstructor>(exec);
}

StyleSheet* toStyleSheet(JSC::JSValuePtr value)
{
    return value->isObject(&JSStyleSheet::s_info) ? static_cast<JSStyleSheet*>(asObject(value))->impl() : 0;
}

}
