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

#include "JSCharacterData.h"

#include <wtf/GetPtr.h>

#include "CharacterData.h"
#include "ExceptionCode.h"
#include "KURL.h"

#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCharacterData)

/* Hash table */

static const HashTableValue JSCharacterDataTableValues[4] =
{
    { "data", DontDelete, (intptr_t)jsCharacterDataData, (intptr_t)setJSCharacterDataData },
    { "length", DontDelete|ReadOnly, (intptr_t)jsCharacterDataLength, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsCharacterDataConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCharacterDataTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 15, JSCharacterDataTableValues, 0 };
#else
    { 9, 7, JSCharacterDataTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSCharacterDataConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSCharacterDataConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSCharacterDataConstructorTableValues, 0 };
#else
    { 1, 0, JSCharacterDataConstructorTableValues, 0 };
#endif

class JSCharacterDataConstructor : public DOMObject {
public:
    JSCharacterDataConstructor(ExecState* exec)
        : DOMObject(JSCharacterDataConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSCharacterDataPrototype::self(exec, exec->lexicalGlobalObject()), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValuePtr proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSCharacterDataConstructor::s_info = { "CharacterDataConstructor", 0, &JSCharacterDataConstructorTable, 0 };

bool JSCharacterDataConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCharacterDataConstructor, DOMObject>(exec, &JSCharacterDataConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSCharacterDataPrototypeTableValues[6] =
{
    { "substringData", DontDelete|Function, (intptr_t)jsCharacterDataPrototypeFunctionSubstringData, (intptr_t)2 },
    { "appendData", DontDelete|Function, (intptr_t)jsCharacterDataPrototypeFunctionAppendData, (intptr_t)1 },
    { "insertData", DontDelete|Function, (intptr_t)jsCharacterDataPrototypeFunctionInsertData, (intptr_t)2 },
    { "deleteData", DontDelete|Function, (intptr_t)jsCharacterDataPrototypeFunctionDeleteData, (intptr_t)2 },
    { "replaceData", DontDelete|Function, (intptr_t)jsCharacterDataPrototypeFunctionReplaceData, (intptr_t)3 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCharacterDataPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 15, JSCharacterDataPrototypeTableValues, 0 };
#else
    { 16, 15, JSCharacterDataPrototypeTableValues, 0 };
#endif

const ClassInfo JSCharacterDataPrototype::s_info = { "CharacterDataPrototype", 0, &JSCharacterDataPrototypeTable, 0 };

JSObject* JSCharacterDataPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCharacterData>(exec, globalObject);
}

bool JSCharacterDataPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSCharacterDataPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSCharacterData::s_info = { "CharacterData", &JSEventTargetNode::s_info, &JSCharacterDataTable, 0 };

JSCharacterData::JSCharacterData(PassRefPtr<Structure> structure, PassRefPtr<CharacterData> impl)
    : JSEventTargetNode(structure, impl)
{
}

JSObject* JSCharacterData::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSCharacterDataPrototype(JSCharacterDataPrototype::createStructure(JSEventTargetNodePrototype::self(exec, globalObject)));
}

bool JSCharacterData::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCharacterData, Base>(exec, &JSCharacterDataTable, this, propertyName, slot);
}

JSValuePtr jsCharacterDataData(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    CharacterData* imp = static_cast<CharacterData*>(static_cast<JSCharacterData*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->data());
}

JSValuePtr jsCharacterDataLength(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    CharacterData* imp = static_cast<CharacterData*>(static_cast<JSCharacterData*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->length());
}

JSValuePtr jsCharacterDataConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSCharacterData*>(asObject(slot.slotBase()))->getConstructor(exec);
}
void JSCharacterData::put(ExecState* exec, const Identifier& propertyName, JSValuePtr value, PutPropertySlot& slot)
{
    lookupPut<JSCharacterData, Base>(exec, propertyName, value, &JSCharacterDataTable, this, slot);
}

void setJSCharacterDataData(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    CharacterData* imp = static_cast<CharacterData*>(static_cast<JSCharacterData*>(thisObject)->impl());
    ExceptionCode ec = 0;
    imp->setData(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}

JSValuePtr JSCharacterData::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSCharacterDataConstructor>(exec);
}

JSValuePtr jsCharacterDataPrototypeFunctionSubstringData(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCharacterData::s_info))
        return throwError(exec, TypeError);
    JSCharacterData* castedThisObj = static_cast<JSCharacterData*>(asObject(thisValue));
    CharacterData* imp = static_cast<CharacterData*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    int offset = args.at(exec, 0)->toInt32(exec);
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return jsUndefined();
    }
    int length = args.at(exec, 1)->toInt32(exec);
    if (length < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return jsUndefined();
    }


    JSC::JSValuePtr result = jsStringOrNull(exec, imp->substringData(offset, length, ec));
    setDOMException(exec, ec);
    return result;
}

JSValuePtr jsCharacterDataPrototypeFunctionAppendData(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCharacterData::s_info))
        return throwError(exec, TypeError);
    JSCharacterData* castedThisObj = static_cast<JSCharacterData*>(asObject(thisValue));
    CharacterData* imp = static_cast<CharacterData*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& data = args.at(exec, 0)->toString(exec);

    imp->appendData(data, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValuePtr jsCharacterDataPrototypeFunctionInsertData(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCharacterData::s_info))
        return throwError(exec, TypeError);
    JSCharacterData* castedThisObj = static_cast<JSCharacterData*>(asObject(thisValue));
    CharacterData* imp = static_cast<CharacterData*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    int offset = args.at(exec, 0)->toInt32(exec);
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return jsUndefined();
    }
    const UString& data = args.at(exec, 1)->toString(exec);

    imp->insertData(offset, data, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValuePtr jsCharacterDataPrototypeFunctionDeleteData(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCharacterData::s_info))
        return throwError(exec, TypeError);
    JSCharacterData* castedThisObj = static_cast<JSCharacterData*>(asObject(thisValue));
    CharacterData* imp = static_cast<CharacterData*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    int offset = args.at(exec, 0)->toInt32(exec);
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return jsUndefined();
    }
    int length = args.at(exec, 1)->toInt32(exec);
    if (length < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return jsUndefined();
    }

    imp->deleteData(offset, length, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValuePtr jsCharacterDataPrototypeFunctionReplaceData(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSCharacterData::s_info))
        return throwError(exec, TypeError);
    JSCharacterData* castedThisObj = static_cast<JSCharacterData*>(asObject(thisValue));
    CharacterData* imp = static_cast<CharacterData*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    int offset = args.at(exec, 0)->toInt32(exec);
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return jsUndefined();
    }
    int length = args.at(exec, 1)->toInt32(exec);
    if (length < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return jsUndefined();
    }
    const UString& data = args.at(exec, 2)->toString(exec);

    imp->replaceData(offset, length, data, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}


}
