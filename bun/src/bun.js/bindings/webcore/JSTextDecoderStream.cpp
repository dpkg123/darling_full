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
#include "JSTextDecoderStream.h"

#include "ExtendedDOMClientIsoSubspaces.h"
#include "ExtendedDOMIsoSubspaces.h"
#include "JSDOMAttribute.h"
#include "JSDOMBinding.h"
#include "JSDOMBuiltinConstructor.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMGlobalObjectInlines.h"
#include "JSDOMWrapperCache.h"
// #include "TextDecoderStreamBuiltins.h"
#include "WebCoreJSClientData.h"
#include <JavaScriptCore/FunctionPrototype.h>
#include <JavaScriptCore/JSCInlines.h>
#include <JavaScriptCore/JSDestructibleObjectHeapCellType.h>
#include <JavaScriptCore/SlotVisitorMacros.h>
#include <JavaScriptCore/SubspaceInlines.h>
#include <wtf/GetPtr.h>
#include <wtf/PointerPreparations.h>

namespace WebCore {
using namespace JSC;

// Attributes

static JSC_DECLARE_CUSTOM_GETTER(jsTextDecoderStreamConstructor);

class JSTextDecoderStreamPrototype final : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSTextDecoderStreamPrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTextDecoderStreamPrototype* ptr = new (NotNull, JSC::allocateCell<JSTextDecoderStreamPrototype>(vm)) JSTextDecoderStreamPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    template<typename CellType, JSC::SubspaceAccess>
    static JSC::GCClient::IsoSubspace* subspaceFor(JSC::VM& vm)
    {
        STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSTextDecoderStreamPrototype, Base);
        return &vm.plainObjectSpace();
    }
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSTextDecoderStreamPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};
STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSTextDecoderStreamPrototype, JSTextDecoderStreamPrototype::Base);

using JSTextDecoderStreamDOMConstructor = JSDOMBuiltinConstructor<JSTextDecoderStream>;

template<> const ClassInfo JSTextDecoderStreamDOMConstructor::s_info = { "TextDecoderStream"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTextDecoderStreamDOMConstructor) };

template<> JSValue JSTextDecoderStreamDOMConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    UNUSED_PARAM(vm);
    return globalObject.functionPrototype();
}

template<> void JSTextDecoderStreamDOMConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    JSString* nameString = jsNontrivialString(vm, "TextDecoderStream"_s);
    m_originalName.set(vm, this, nameString);
    putDirect(vm, vm.propertyNames->name, nameString, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->prototype, JSTextDecoderStream::prototype(vm, globalObject), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::DontDelete);
}

template<> FunctionExecutable* JSTextDecoderStreamDOMConstructor::initializeExecutable(VM& vm)
{
    return textDecoderStreamInitializeTextDecoderStreamCodeGenerator(vm);
}

/* Hash table for prototype */

static const HashTableValue JSTextDecoderStreamPrototypeTableValues[] = {
    { "constructor"_s, static_cast<unsigned>(PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsTextDecoderStreamConstructor, 0 } },
    { "encoding"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::Accessor | JSC::PropertyAttribute::Builtin, NoIntrinsic, { HashTableValue::BuiltinAccessorType, textDecoderStreamEncodingCodeGenerator, 0 } },
    { "fatal"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::Accessor | JSC::PropertyAttribute::Builtin, NoIntrinsic, { HashTableValue::BuiltinAccessorType, textDecoderStreamFatalCodeGenerator, 0 } },
    { "ignoreBOM"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::Accessor | JSC::PropertyAttribute::Builtin, NoIntrinsic, { HashTableValue::BuiltinAccessorType, textDecoderStreamIgnoreBOMCodeGenerator, 0 } },
    { "readable"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::Accessor | JSC::PropertyAttribute::Builtin, NoIntrinsic, { HashTableValue::BuiltinAccessorType, textDecoderStreamReadableCodeGenerator, 0 } },
    { "writable"_s, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::Accessor | JSC::PropertyAttribute::Builtin, NoIntrinsic, { HashTableValue::BuiltinAccessorType, textDecoderStreamWritableCodeGenerator, 0 } },
};

const ClassInfo JSTextDecoderStreamPrototype::s_info = { "TextDecoderStream"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTextDecoderStreamPrototype) };

void JSTextDecoderStreamPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSTextDecoderStream::info(), JSTextDecoderStreamPrototypeTableValues, *this);
    JSC_TO_STRING_TAG_WITHOUT_TRANSITION();
}

const ClassInfo JSTextDecoderStream::s_info = { "TextDecoderStream"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTextDecoderStream) };

JSTextDecoderStream::JSTextDecoderStream(Structure* structure, JSDOMGlobalObject& globalObject)
    : JSDOMObject(structure, globalObject)
{
}

JSObject* JSTextDecoderStream::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    auto* structure = JSTextDecoderStreamPrototype::createStructure(vm, &globalObject, globalObject.objectPrototype());
    structure->setMayBePrototype(true);
    return JSTextDecoderStreamPrototype::create(vm, &globalObject, structure);
}

JSObject* JSTextDecoderStream::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSTextDecoderStream>(vm, globalObject);
}

JSValue JSTextDecoderStream::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTextDecoderStreamDOMConstructor, DOMConstructorID::TextDecoderStream>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

void JSTextDecoderStream::destroy(JSC::JSCell* cell)
{
    JSTextDecoderStream* thisObject = static_cast<JSTextDecoderStream*>(cell);
    thisObject->JSTextDecoderStream::~JSTextDecoderStream();
}

JSC_DEFINE_CUSTOM_GETTER(jsTextDecoderStreamConstructor, (JSGlobalObject * lexicalGlobalObject, EncodedJSValue thisValue, PropertyName))
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSTextDecoderStreamPrototype*>(JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(lexicalGlobalObject, throwScope);
    return JSValue::encode(JSTextDecoderStream::getConstructor(vm, prototype->globalObject()));
}

JSC::GCClient::IsoSubspace* JSTextDecoderStream::subspaceForImpl(JSC::VM& vm)
{
    return WebCore::subspaceForImpl<JSTextDecoderStream, UseCustomHeapCellType::No>(
        vm, [](auto& spaces) { return spaces.m_clientSubspaceForTextDecoderStream.get(); }, [](auto& spaces, auto&& space) { spaces.m_clientSubspaceForTextDecoderStream = std::forward<decltype(space)>(space); }, [](auto& spaces) { return spaces.m_subspaceForTextDecoderStream.get(); }, [](auto& spaces, auto&& space) { spaces.m_subspaceForTextDecoderStream = std::forward<decltype(space)>(space); });
}

}