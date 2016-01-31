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

#include "JSConsole.h"

#include <wtf/GetPtr.h>

#include "Console.h"
#include "ScriptCallStack.h"

#include <runtime/Error.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSConsole)

/* Hash table */

static const HashTableValue JSConsoleTableValues[2] =
{
    { "profiles", DontDelete|ReadOnly, (intptr_t)jsConsoleProfiles, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSConsoleTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSConsoleTableValues, 0 };
#else
    { 2, 1, JSConsoleTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSConsolePrototypeTableValues[17] =
{
    { "debug", DontDelete|Function, (intptr_t)jsConsolePrototypeFunctionDebug, (intptr_t)0 },
    { "error", DontDelete|Function, (intptr_t)jsConsolePrototypeFunctionError, (intptr_t)0 },
    { "info", DontDelete|Function, (intptr_t)jsConsolePrototypeFunctionInfo, (intptr_t)0 },
    { "log", DontDelete|Function, (intptr_t)jsConsolePrototypeFunctionLog, (intptr_t)0 },
    { "warn", DontDelete|Function, (intptr_t)jsConsolePrototypeFunctionWarn, (intptr_t)0 },
    { "dir", DontDelete|Function, (intptr_t)jsConsolePrototypeFunctionDir, (intptr_t)0 },
    { "dirxml", DontDelete|Function, (intptr_t)jsConsolePrototypeFunctionDirxml, (intptr_t)0 },
    { "trace", DontDelete|Function, (intptr_t)jsConsolePrototypeFunctionTrace, (intptr_t)0 },
    { "assert", DontDelete|Function, (intptr_t)jsConsolePrototypeFunctionAssert, (intptr_t)1 },
    { "count", DontDelete|Function, (intptr_t)jsConsolePrototypeFunctionCount, (intptr_t)0 },
    { "profile", DontDelete|Function, (intptr_t)jsConsolePrototypeFunctionProfile, (intptr_t)1 },
    { "profileEnd", DontDelete|Function, (intptr_t)jsConsolePrototypeFunctionProfileEnd, (intptr_t)1 },
    { "time", DontDelete|Function, (intptr_t)jsConsolePrototypeFunctionTime, (intptr_t)1 },
    { "timeEnd", DontDelete|Function, (intptr_t)jsConsolePrototypeFunctionTimeEnd, (intptr_t)1 },
    { "group", DontDelete|Function, (intptr_t)jsConsolePrototypeFunctionGroup, (intptr_t)0 },
    { "groupEnd", DontDelete|Function, (intptr_t)jsConsolePrototypeFunctionGroupEnd, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSConsolePrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 511, JSConsolePrototypeTableValues, 0 };
#else
    { 35, 31, JSConsolePrototypeTableValues, 0 };
#endif

const ClassInfo JSConsolePrototype::s_info = { "ConsolePrototype", 0, &JSConsolePrototypeTable, 0 };

JSObject* JSConsolePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSConsole>(exec, globalObject);
}

bool JSConsolePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSConsolePrototypeTable, this, propertyName, slot);
}

const ClassInfo JSConsole::s_info = { "Console", 0, &JSConsoleTable, 0 };

JSConsole::JSConsole(PassRefPtr<Structure> structure, PassRefPtr<Console> impl)
    : DOMObject(structure)
    , m_impl(impl)
{
}

JSConsole::~JSConsole()
{
    forgetDOMObject(*Heap::heap(this)->globalData(), m_impl.get());

}

JSObject* JSConsole::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSConsolePrototype(JSConsolePrototype::createStructure(globalObject->objectPrototype()));
}

bool JSConsole::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSConsole, Base>(exec, &JSConsoleTable, this, propertyName, slot);
}

JSValuePtr jsConsoleProfiles(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSConsole*>(asObject(slot.slotBase()))->profiles(exec);
}

JSValuePtr jsConsolePrototypeFunctionDebug(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThisObj->impl());
    ScriptCallStack callStack(exec, args, 0);

    imp->debug(&callStack);
    return jsUndefined();
}

JSValuePtr jsConsolePrototypeFunctionError(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThisObj->impl());
    ScriptCallStack callStack(exec, args, 0);

    imp->error(&callStack);
    return jsUndefined();
}

JSValuePtr jsConsolePrototypeFunctionInfo(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThisObj->impl());
    ScriptCallStack callStack(exec, args, 0);

    imp->info(&callStack);
    return jsUndefined();
}

JSValuePtr jsConsolePrototypeFunctionLog(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThisObj->impl());
    ScriptCallStack callStack(exec, args, 0);

    imp->log(&callStack);
    return jsUndefined();
}

JSValuePtr jsConsolePrototypeFunctionWarn(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThisObj->impl());
    ScriptCallStack callStack(exec, args, 0);

    imp->warn(&callStack);
    return jsUndefined();
}

JSValuePtr jsConsolePrototypeFunctionDir(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThisObj->impl());
    ScriptCallStack callStack(exec, args, 0);

    imp->dir(&callStack);
    return jsUndefined();
}

JSValuePtr jsConsolePrototypeFunctionDirxml(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThisObj->impl());
    ScriptCallStack callStack(exec, args, 0);

    imp->dirxml(&callStack);
    return jsUndefined();
}

JSValuePtr jsConsolePrototypeFunctionTrace(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThisObj->impl());
    ScriptCallStack callStack(exec, args, 0);

    imp->trace(&callStack);
    return jsUndefined();
}

JSValuePtr jsConsolePrototypeFunctionAssert(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThisObj->impl());
    ScriptCallStack callStack(exec, args, 1);
    bool condition = args.at(exec, 0)->toBoolean(exec);

    imp->assertCondition(condition, &callStack);
    return jsUndefined();
}

JSValuePtr jsConsolePrototypeFunctionCount(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThisObj->impl());
    ScriptCallStack callStack(exec, args, 0);

    imp->count(&callStack);
    return jsUndefined();
}

JSValuePtr jsConsolePrototypeFunctionProfile(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThisObj->impl());
    ScriptCallStack callStack(exec, args, 1);
    const UString& title = valueToStringWithUndefinedOrNullCheck(exec, args.at(exec, 0));

    imp->profile(title, &callStack);
    return jsUndefined();
}

JSValuePtr jsConsolePrototypeFunctionProfileEnd(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThisObj->impl());
    ScriptCallStack callStack(exec, args, 1);
    const UString& title = valueToStringWithUndefinedOrNullCheck(exec, args.at(exec, 0));

    imp->profileEnd(title, &callStack);
    return jsUndefined();
}

JSValuePtr jsConsolePrototypeFunctionTime(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThisObj->impl());
    const UString& title = valueToStringWithUndefinedOrNullCheck(exec, args.at(exec, 0));

    imp->time(title);
    return jsUndefined();
}

JSValuePtr jsConsolePrototypeFunctionTimeEnd(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThisObj->impl());
    ScriptCallStack callStack(exec, args, 1);
    const UString& title = valueToStringWithUndefinedOrNullCheck(exec, args.at(exec, 0));

    imp->timeEnd(title, &callStack);
    return jsUndefined();
}

JSValuePtr jsConsolePrototypeFunctionGroup(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThisObj->impl());
    ScriptCallStack callStack(exec, args, 0);

    imp->group(&callStack);
    return jsUndefined();
}

JSValuePtr jsConsolePrototypeFunctionGroupEnd(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(asObject(thisValue));
    Console* imp = static_cast<Console*>(castedThisObj->impl());

    imp->groupEnd();
    return jsUndefined();
}

JSC::JSValuePtr toJS(JSC::ExecState* exec, Console* object)
{
    return getDOMObjectWrapper<JSConsole>(exec, object);
}
Console* toConsole(JSC::JSValuePtr value)
{
    return value->isObject(&JSConsole::s_info) ? static_cast<JSConsole*>(asObject(value))->impl() : 0;
}

}
