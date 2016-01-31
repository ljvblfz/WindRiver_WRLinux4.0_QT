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

#include "JSGeolocation.h"

#include <wtf/GetPtr.h>

#include "Geolocation.h"
#include "Geoposition.h"
#include "JSGeoposition.h"

#include <runtime/Error.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSGeolocation)

/* Hash table */

static const HashTableValue JSGeolocationTableValues[2] =
{
    { "lastPosition", DontDelete|ReadOnly, (intptr_t)jsGeolocationLastPosition, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSGeolocationTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSGeolocationTableValues, 0 };
#else
    { 2, 1, JSGeolocationTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSGeolocationPrototypeTableValues[4] =
{
    { "getCurrentPosition", DontDelete|Function, (intptr_t)jsGeolocationPrototypeFunctionGetCurrentPosition, (intptr_t)3 },
    { "watchPosition", DontDelete|Function, (intptr_t)jsGeolocationPrototypeFunctionWatchPosition, (intptr_t)3 },
    { "clearWatch", DontDelete|Function, (intptr_t)jsGeolocationPrototypeFunctionClearWatch, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSGeolocationPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 15, JSGeolocationPrototypeTableValues, 0 };
#else
    { 9, 7, JSGeolocationPrototypeTableValues, 0 };
#endif

const ClassInfo JSGeolocationPrototype::s_info = { "GeolocationPrototype", 0, &JSGeolocationPrototypeTable, 0 };

JSObject* JSGeolocationPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSGeolocation>(exec, globalObject);
}

bool JSGeolocationPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSGeolocationPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSGeolocation::s_info = { "Geolocation", 0, &JSGeolocationTable, 0 };

JSGeolocation::JSGeolocation(PassRefPtr<Structure> structure, PassRefPtr<Geolocation> impl)
    : DOMObject(structure)
    , m_impl(impl)
{
}

JSGeolocation::~JSGeolocation()
{
    forgetDOMObject(*Heap::heap(this)->globalData(), m_impl.get());

}

JSObject* JSGeolocation::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSGeolocationPrototype(JSGeolocationPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSGeolocation::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSGeolocation, Base>(exec, &JSGeolocationTable, this, propertyName, slot);
}

JSValuePtr jsGeolocationLastPosition(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Geolocation* imp = static_cast<Geolocation*>(static_cast<JSGeolocation*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->lastPosition()));
}

JSValuePtr jsGeolocationPrototypeFunctionGetCurrentPosition(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSGeolocation::s_info))
        return throwError(exec, TypeError);
    JSGeolocation* castedThisObj = static_cast<JSGeolocation*>(asObject(thisValue));
    return castedThisObj->getCurrentPosition(exec, args);
}

JSValuePtr jsGeolocationPrototypeFunctionWatchPosition(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSGeolocation::s_info))
        return throwError(exec, TypeError);
    JSGeolocation* castedThisObj = static_cast<JSGeolocation*>(asObject(thisValue));
    return castedThisObj->watchPosition(exec, args);
}

JSValuePtr jsGeolocationPrototypeFunctionClearWatch(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSGeolocation::s_info))
        return throwError(exec, TypeError);
    JSGeolocation* castedThisObj = static_cast<JSGeolocation*>(asObject(thisValue));
    Geolocation* imp = static_cast<Geolocation*>(castedThisObj->impl());
    int watchId = args.at(exec, 0)->toInt32(exec);

    imp->clearWatch(watchId);
    return jsUndefined();
}

JSC::JSValuePtr toJS(JSC::ExecState* exec, Geolocation* object)
{
    return getDOMObjectWrapper<JSGeolocation>(exec, object);
}
Geolocation* toGeolocation(JSC::JSValuePtr value)
{
    return value->isObject(&JSGeolocation::s_info) ? static_cast<JSGeolocation*>(asObject(value))->impl() : 0;
}

}
