/*
 * Copyright (C) 2011 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Code to initialize references to classes and members for use by
 * lower-level VM facilities
 */

#include "Dalvik.h"

void dvmForEachRequiredReference(ObjectReferenceCallback* callback) {
    /*
     * TODO: Check to see if this function is ever needed in practice
     * (after letting it hang out in the codebase for a little while).
     * Originally it looked like the GC might want it, but that was a
     * mistaken impression.
     */
    callback((Object**) (void*) &gDvm.classArrayBoolean);
    callback((Object**) (void*) &gDvm.classArrayByte);
    callback((Object**) (void*) &gDvm.classArrayChar);
    callback((Object**) (void*) &gDvm.classArrayDouble);
    callback((Object**) (void*) &gDvm.classArrayFloat);
    callback((Object**) (void*) &gDvm.classArrayInt);
    callback((Object**) (void*) &gDvm.classArrayLong);
    callback((Object**) (void*) &gDvm.classArrayShort);
    callback((Object**) (void*) &gDvm.classJavaLangAnnotationAnnotationArray);
    callback((Object**) (void*) &gDvm.classJavaLangAnnotationAnnotationArrayArray);
    callback((Object**) (void*) &gDvm.classJavaLangClass);
    callback((Object**) (void*) &gDvm.classJavaLangClassArray);
    callback((Object**) (void*) &gDvm.classJavaLangClassLoader);
    callback((Object**) (void*) &gDvm.classJavaLangObject);
    callback((Object**) (void*) &gDvm.classJavaLangObjectArray);
    callback((Object**) (void*) &gDvm.classJavaLangRefFinalizerReference);
    callback((Object**) (void*) &gDvm.classJavaLangReflectAccessibleObject);
    callback((Object**) (void*) &gDvm.classJavaLangReflectConstructor);
    callback((Object**) (void*) &gDvm.classJavaLangReflectConstructorArray);
    callback((Object**) (void*) &gDvm.classJavaLangReflectField);
    callback((Object**) (void*) &gDvm.classJavaLangReflectFieldArray);
    callback((Object**) (void*) &gDvm.classJavaLangReflectMethod);
    callback((Object**) (void*) &gDvm.classJavaLangReflectMethodArray);
    callback((Object**) (void*) &gDvm.classJavaLangReflectProxy);
    callback((Object**) (void*) &gDvm.classJavaLangStackTraceElement);
    callback((Object**) (void*) &gDvm.classJavaLangStackTraceElementArray);
    callback((Object**) (void*) &gDvm.classJavaLangString);
    callback((Object**) (void*) &gDvm.classJavaLangThread);
    callback((Object**) (void*) &gDvm.classJavaLangThreadGroup);
    callback((Object**) (void*) &gDvm.classJavaLangVMThread);
    callback((Object**) (void*) &gDvm.classJavaNioReadWriteDirectByteBuffer);
    callback((Object**) (void*) &gDvm.classOrgApacheHarmonyLangAnnotationAnnotationFactory);
    callback((Object**) (void*) &gDvm.classOrgApacheHarmonyLangAnnotationAnnotationMember);
    callback((Object**) (void*) &gDvm.classOrgApacheHarmonyLangAnnotationAnnotationMemberArray);
    callback((Object**) (void*) &gDvm.classOrgApacheHarmonyDalvikDdmcChunk);
    callback((Object**) (void*) &gDvm.classOrgApacheHarmonyDalvikDdmcDdmServer);
    callback((Object**) (void*) &gDvm.exAbstractMethodError);
    callback((Object**) (void*) &gDvm.exArithmeticException);
    callback((Object**) (void*) &gDvm.exArrayIndexOutOfBoundsException);
    callback((Object**) (void*) &gDvm.exArrayStoreException);
    callback((Object**) (void*) &gDvm.exClassCastException);
    callback((Object**) (void*) &gDvm.exClassCircularityError);
    callback((Object**) (void*) &gDvm.exClassFormatError);
    callback((Object**) (void*) &gDvm.exClassNotFoundException);
    callback((Object**) (void*) &gDvm.exError);
    callback((Object**) (void*) &gDvm.exExceptionInInitializerError);
    callback((Object**) (void*) &gDvm.exFileNotFoundException);
    callback((Object**) (void*) &gDvm.exIOException);
    callback((Object**) (void*) &gDvm.exIllegalAccessError);
    callback((Object**) (void*) &gDvm.exIllegalAccessException);
    callback((Object**) (void*) &gDvm.exIllegalArgumentException);
    callback((Object**) (void*) &gDvm.exIllegalMonitorStateException);
    callback((Object**) (void*) &gDvm.exIllegalStateException);
    callback((Object**) (void*) &gDvm.exIllegalThreadStateException);
    callback((Object**) (void*) &gDvm.exIncompatibleClassChangeError);
    callback((Object**) (void*) &gDvm.exInstantiationError);
    callback((Object**) (void*) &gDvm.exInstantiationException);
    callback((Object**) (void*) &gDvm.exInternalError);
    callback((Object**) (void*) &gDvm.exInterruptedException);
    callback((Object**) (void*) &gDvm.exLinkageError);
    callback((Object**) (void*) &gDvm.exNegativeArraySizeException);
    callback((Object**) (void*) &gDvm.exNoClassDefFoundError);
    callback((Object**) (void*) &gDvm.exNoSuchFieldError);
    callback((Object**) (void*) &gDvm.exNoSuchFieldException);
    callback((Object**) (void*) &gDvm.exNoSuchMethodError);
    callback((Object**) (void*) &gDvm.exNullPointerException);
    callback((Object**) (void*) &gDvm.exOutOfMemoryError);
    callback((Object**) (void*) &gDvm.exRuntimeException);
    callback((Object**) (void*) &gDvm.exStackOverflowError);
    callback((Object**) (void*) &gDvm.exStaleDexCacheError);
    callback((Object**) (void*) &gDvm.exStringIndexOutOfBoundsException);
    callback((Object**) (void*) &gDvm.exThrowable);
    callback((Object**) (void*) &gDvm.exTypeNotPresentException);
    callback((Object**) (void*) &gDvm.exUnsatisfiedLinkError);
    callback((Object**) (void*) &gDvm.exUnsupportedOperationException);
    callback((Object**) (void*) &gDvm.exVerifyError);
    callback((Object**) (void*) &gDvm.exVirtualMachineError);
    callback((Object**) (void*) &gDvm.typeBoolean);
    callback((Object**) (void*) &gDvm.typeByte);
    callback((Object**) (void*) &gDvm.typeChar);
    callback((Object**) (void*) &gDvm.typeDouble);
    callback((Object**) (void*) &gDvm.typeFloat);
    callback((Object**) (void*) &gDvm.typeInt);
    callback((Object**) (void*) &gDvm.typeLong);
    callback((Object**) (void*) &gDvm.typeShort);
    callback((Object**) (void*) &gDvm.typeVoid);
}

static bool initClassReference(ClassObject** pClass, const char* name) {
    ClassObject* result;

    if (*pClass != NULL) {
        /*
         * There are a couple cases where it's legit to call this
         * function with an already-initialized reference, so just
         * silently tolerate this instead of complaining loudly.
         */
        return true;
    }

    if (name[0] == '[') {
        result = dvmFindArrayClass(name, NULL);
    } else {
        result = dvmFindSystemClassNoInit(name);
    }

    if (result == NULL) {
        LOGE("Could not find essential class %s\n", name);
        return false;
    }

    *pClass = result;
    return true;
}

static bool initClassReferences(void) {
    static struct { ClassObject** ref; const char* name; } classes[] = {

        /* The corest of the core classes */
        { &gDvm.classJavaLangClass,  "Ljava/lang/Class;" },
        { &gDvm.classJavaLangObject, "Ljava/lang/Object;" },
        { &gDvm.exThrowable,         "Ljava/lang/Throwable;" },

        /* Slightly less core, but still down there, classes */
        { &gDvm.classJavaLangClassArray,             "[Ljava/lang/Class;" },
        { &gDvm.classJavaLangClassLoader,            "Ljava/lang/ClassLoader;" },
        { &gDvm.classJavaLangObjectArray,            "[Ljava/lang/Object;"},
        { &gDvm.classJavaLangStackTraceElement,      "Ljava/lang/StackTraceElement;" },
        { &gDvm.classJavaLangStackTraceElementArray, "[Ljava/lang/StackTraceElement;" },
        { &gDvm.classJavaLangString,                 "Ljava/lang/String;" },
        { &gDvm.classJavaLangThread,                 "Ljava/lang/Thread;" },
        { &gDvm.classJavaLangThreadGroup,            "Ljava/lang/ThreadGroup;" },
        { &gDvm.classJavaLangVMThread,               "Ljava/lang/VMThread;" },

        /* Arrays of primitive types */
        { &gDvm.classArrayBoolean, "[Z" },
        { &gDvm.classArrayByte,    "[B" },
        { &gDvm.classArrayShort,   "[S" },
        { &gDvm.classArrayChar,    "[C" },
        { &gDvm.classArrayInt,     "[I" },
        { &gDvm.classArrayLong,    "[J" },
        { &gDvm.classArrayFloat,   "[F" },
        { &gDvm.classArrayDouble,  "[D" },

        /* Exception classes */
        { &gDvm.exAbstractMethodError,             "Ljava/lang/AbstractMethodError;" },
        { &gDvm.exArithmeticException,             "Ljava/lang/ArithmeticException;" },
        { &gDvm.exArrayIndexOutOfBoundsException,  "Ljava/lang/ArrayIndexOutOfBoundsException;" },
        { &gDvm.exArrayStoreException,             "Ljava/lang/ArrayStoreException;" },
        { &gDvm.exClassCastException,              "Ljava/lang/ClassCastException;" },
        { &gDvm.exClassCircularityError,           "Ljava/lang/ClassCircularityError;" },
        { &gDvm.exClassNotFoundException,          "Ljava/lang/ClassNotFoundException;" },
        { &gDvm.exClassFormatError,                "Ljava/lang/ClassFormatError;" },
        { &gDvm.exError,                           "Ljava/lang/Error;" },
        { &gDvm.exExceptionInInitializerError,     "Ljava/lang/ExceptionInInitializerError;" },
        { &gDvm.exFileNotFoundException,           "Ljava/io/FileNotFoundException;" },
        { &gDvm.exIOException,                     "Ljava/io/IOException;" },
        { &gDvm.exIllegalAccessError,              "Ljava/lang/IllegalAccessError;" },
        { &gDvm.exIllegalAccessException,          "Ljava/lang/IllegalAccessException;" },
        { &gDvm.exIllegalArgumentException,        "Ljava/lang/IllegalArgumentException;" },
        { &gDvm.exIllegalMonitorStateException,    "Ljava/lang/IllegalMonitorStateException;" },
        { &gDvm.exIllegalStateException,           "Ljava/lang/IllegalStateException;" },
        { &gDvm.exIllegalThreadStateException,     "Ljava/lang/IllegalThreadStateException;" },
        { &gDvm.exIncompatibleClassChangeError,    "Ljava/lang/IncompatibleClassChangeError;" },
        { &gDvm.exInstantiationError,              "Ljava/lang/InstantiationError;" },
        { &gDvm.exInstantiationException,          "Ljava/lang/InstantiationException;" },
        { &gDvm.exInternalError,                   "Ljava/lang/InternalError;" },
        { &gDvm.exInterruptedException,            "Ljava/lang/InterruptedException;" },
        { &gDvm.exLinkageError,                    "Ljava/lang/LinkageError;" },
        { &gDvm.exNegativeArraySizeException,      "Ljava/lang/NegativeArraySizeException;" },
        { &gDvm.exNoClassDefFoundError,            "Ljava/lang/NoClassDefFoundError;" },
        { &gDvm.exNoSuchFieldError,                "Ljava/lang/NoSuchFieldError;" },
        { &gDvm.exNoSuchFieldException,            "Ljava/lang/NoSuchFieldException;" },
        { &gDvm.exNoSuchMethodError,               "Ljava/lang/NoSuchMethodError;" },
        { &gDvm.exNullPointerException,            "Ljava/lang/NullPointerException;" },
        { &gDvm.exOutOfMemoryError,                "Ljava/lang/OutOfMemoryError;" },
        { &gDvm.exRuntimeException,                "Ljava/lang/RuntimeException;" },
        { &gDvm.exStackOverflowError,              "Ljava/lang/StackOverflowError;" },
        { &gDvm.exStaleDexCacheError,              "Ldalvik/system/StaleDexCacheError;" },
        { &gDvm.exStringIndexOutOfBoundsException, "Ljava/lang/StringIndexOutOfBoundsException;" },
        { &gDvm.exTypeNotPresentException,         "Ljava/lang/TypeNotPresentException;" },
        { &gDvm.exUnsatisfiedLinkError,            "Ljava/lang/UnsatisfiedLinkError;" },
        { &gDvm.exUnsupportedOperationException,   "Ljava/lang/UnsupportedOperationException;" },
        { &gDvm.exVerifyError,                     "Ljava/lang/VerifyError;" },
        { &gDvm.exVirtualMachineError,             "Ljava/lang/VirtualMachineError;" },

        /* Other classes */
        { &gDvm.classJavaLangAnnotationAnnotationArray, "[Ljava/lang/annotation/Annotation;" },
        { &gDvm.classJavaLangAnnotationAnnotationArrayArray,
          "[[Ljava/lang/annotation/Annotation;" },
        { &gDvm.classJavaLangReflectAccessibleObject,   "Ljava/lang/reflect/AccessibleObject;" },
        { &gDvm.classJavaLangReflectConstructor,        "Ljava/lang/reflect/Constructor;" },
        { &gDvm.classJavaLangReflectConstructorArray,   "[Ljava/lang/reflect/Constructor;" },
        { &gDvm.classJavaLangReflectField,              "Ljava/lang/reflect/Field;" },
        { &gDvm.classJavaLangReflectFieldArray,         "[Ljava/lang/reflect/Field;" },
        { &gDvm.classJavaLangReflectMethod,             "Ljava/lang/reflect/Method;" },
        { &gDvm.classJavaLangReflectMethodArray,        "[Ljava/lang/reflect/Method;"},
        { &gDvm.classJavaLangReflectProxy,              "Ljava/lang/reflect/Proxy;" },
        { &gDvm.classJavaNioReadWriteDirectByteBuffer,  "Ljava/nio/ReadWriteDirectByteBuffer;" },
        { &gDvm.classOrgApacheHarmonyDalvikDdmcChunk,
          "Lorg/apache/harmony/dalvik/ddmc/Chunk;" },
        { &gDvm.classOrgApacheHarmonyDalvikDdmcDdmServer,
          "Lorg/apache/harmony/dalvik/ddmc/DdmServer;" },
        { &gDvm.classOrgApacheHarmonyLangAnnotationAnnotationFactory,
          "Lorg/apache/harmony/lang/annotation/AnnotationFactory;" },
        { &gDvm.classOrgApacheHarmonyLangAnnotationAnnotationMember,
          "Lorg/apache/harmony/lang/annotation/AnnotationMember;" },
        { &gDvm.classOrgApacheHarmonyLangAnnotationAnnotationMemberArray,
          "[Lorg/apache/harmony/lang/annotation/AnnotationMember;" },

        { NULL, NULL }
    };

    int i;
    for (i = 0; classes[i].ref != NULL; i++) {
        if (!initClassReference(classes[i].ref, classes[i].name)) {
            return false;
        }
    }

    return true;
}

static bool initFieldOffset(ClassObject* clazz, int *pOffset,
        const char* name, const char* type) {
    int offset = dvmFindFieldOffset(clazz, name, type);
    if (offset < 0) {
        LOGE("Could not find essential field %s.%s of type %s\n", clazz->descriptor, name, type);
        return false;
    }

    *pOffset = offset;
    return true;
}

static bool initFieldOffsets(void) {
    struct FieldInfo {
        int* offset;
        const char* name;
        const char* type;
    };

    static struct FieldInfo infoDdmcChunk[] = {
        { &gDvm.offDalvikDdmcChunk_type,   "type",   "I" },
        { &gDvm.offDalvikDdmcChunk_data,   "data",   "[B" },
        { &gDvm.offDalvikDdmcChunk_offset, "offset", "I" },
        { &gDvm.offDalvikDdmcChunk_length, "length", "I" },
        { NULL, NULL, NULL }
    };

    static struct FieldInfo infoFileDescriptor[] = {
        { &gDvm.offJavaIoFileDescriptor_descriptor, "descriptor", "I" },
        { NULL, NULL, NULL }
    };

    static struct FieldInfo infoString[] = {
        { &gDvm.offJavaLangString_value,    "value",    "[C" },
        { &gDvm.offJavaLangString_count,    "count",    "I" },
        { &gDvm.offJavaLangString_offset,   "offset",   "I" },
        { &gDvm.offJavaLangString_hashCode, "hashCode", "I" },
        { NULL, NULL, NULL }
    };

    static struct FieldInfo infoThread[] = {
        { &gDvm.offJavaLangThread_vmThread,           "vmThread",           "Ljava/lang/VMThread;" },
        { &gDvm.offJavaLangThread_group,              "group",              "Ljava/lang/ThreadGroup;" },
        { &gDvm.offJavaLangThread_daemon,             "daemon",             "Z" },
        { &gDvm.offJavaLangThread_name,               "name",               "Ljava/lang/String;" },
        { &gDvm.offJavaLangThread_priority,           "priority",           "I" },
        { &gDvm.offJavaLangThread_uncaughtHandler,    "uncaughtHandler",    "Ljava/lang/Thread$UncaughtExceptionHandler;" },
        { &gDvm.offJavaLangThread_contextClassLoader, "contextClassLoader", "Ljava/lang/ClassLoader;" },
        { NULL, NULL, NULL }
    };

    static struct FieldInfo infoThreadGroup[] = {
        { &gDvm.offJavaLangThreadGroup_name,   "name",   "Ljava/lang/String;" },
        { &gDvm.offJavaLangThreadGroup_parent, "parent", "Ljava/lang/ThreadGroup;" },
        { NULL, NULL, NULL }
    };

    static struct FieldInfo infoThrowable[] = {
        { &gDvm.offJavaLangThrowable_stackState, "stackState", "Ljava/lang/Object;" },
        { &gDvm.offJavaLangThrowable_cause,      "cause",      "Ljava/lang/Throwable;" },
        { NULL, NULL, NULL }
    };

    static struct FieldInfo infoVMThread[] = {
        { &gDvm.offJavaLangVMThread_thread, "thread", "Ljava/lang/Thread;" },
        { &gDvm.offJavaLangVMThread_vmData, "vmData", "I" },
        { NULL, NULL, NULL }
    };

    static struct FieldInfo infoFinalizerReference[] = {
        { &gDvm.offJavaLangRefFinalizerReference_zombie, "zombie", "Ljava/lang/Object;" },
        { NULL, NULL, NULL }
    };

    static struct FieldInfo infoConstructor[] = {
        { &gDvm.offJavaLangReflectConstructor_slot,      "slot",           "I" },
        { &gDvm.offJavaLangReflectConstructor_declClass, "declaringClass", "Ljava/lang/Class;" },
        { NULL, NULL, NULL }
    };

    static struct FieldInfo infoField[] = {
        { &gDvm.offJavaLangReflectField_slot,      "slot",           "I" },
        { &gDvm.offJavaLangReflectField_declClass, "declaringClass", "Ljava/lang/Class;" },
        { NULL, NULL, NULL }
    };

    static struct FieldInfo infoMethod[] = {
        { &gDvm.offJavaLangReflectMethod_slot,      "slot",           "I" },
        { &gDvm.offJavaLangReflectMethod_declClass, "declaringClass", "Ljava/lang/Class;" },
        { NULL, NULL, NULL }
    };

    static struct FieldInfo infoProxy[] = {
        { &gDvm.offJavaLangReflectProxy_h, "h", "Ljava/lang/reflect/InvocationHandler;" },
        { NULL, NULL, NULL }
    };

    static struct FieldInfo infoBuffer[] = {
        { &gDvm.offJavaNioBuffer_capacity,               "capacity",               "I" },
        { &gDvm.offJavaNioBuffer_effectiveDirectAddress, "effectiveDirectAddress", "I" },
        { NULL, NULL, NULL }
    };

    static struct { const char* name; const struct FieldInfo* fields; } classes[] = {
        { "Lorg/apache/harmony/dalvik/ddmc/Chunk;", infoDdmcChunk },
        { "Ljava/io/FileDescriptor;",               infoFileDescriptor },
        { "Ljava/lang/String;",                     infoString },
        { "Ljava/lang/Thread;",                     infoThread },
        { "Ljava/lang/ThreadGroup;",                infoThreadGroup },
        { "Ljava/lang/Throwable;",                  infoThrowable },
        { "Ljava/lang/VMThread;",                   infoVMThread },
        { "Ljava/lang/ref/FinalizerReference;", infoFinalizerReference },
        { "Ljava/lang/reflect/Constructor;",        infoConstructor },
        { "Ljava/lang/reflect/Field;",              infoField },
        { "Ljava/lang/reflect/Method;",             infoMethod },
        { "Ljava/lang/reflect/Proxy;",              infoProxy },
        { "Ljava/nio/Buffer;",                      infoBuffer },
        { NULL, NULL }
    };

    int i;
    for (i = 0; classes[i].name != NULL; i++) {
        const char* className = classes[i].name;
        ClassObject* clazz = dvmFindSystemClassNoInit(className);
        const struct FieldInfo* fields = classes[i].fields;

        if (clazz == NULL) {
            LOGE("Could not find essential class %s for field lookup\n", className);
            return false;
        }

        int j;
        for (j = 0; fields[j].offset != NULL; j++) {
            if (!initFieldOffset(clazz, fields[j].offset, fields[j].name, fields[j].type)) {
                return false;
            }
        }
    }

    return true;
}

static bool initDirectMethodReferenceByClass(Method** pMethod, ClassObject* clazz,
        const char* name, const char* descriptor) {
    Method* method = dvmFindDirectMethodByDescriptor(clazz, name, descriptor);

    if (method == NULL) {
        LOGE("Could not find essential direct method %s.%s with descriptor %s\n",
                clazz->descriptor, name, descriptor);
        return false;
    }

    *pMethod = method;
    return true;
}

static bool initDirectMethodReference(Method** pMethod, const char* className,
        const char* name, const char* descriptor) {
    ClassObject* clazz = dvmFindSystemClassNoInit(className);

    if (clazz == NULL) {
        LOGE("Could not find essential class %s for direct method lookup\n", className);
        return false;
    }

    return initDirectMethodReferenceByClass(pMethod, clazz, name, descriptor);
}

static bool initConstructorReferences(void) {
    static struct { Method** method; const char* name; const char* descriptor; } constructors[] = {
        { &gDvm.methJavaLangStackTraceElement_init, "Ljava/lang/StackTraceElement;",
          "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V" },
        { &gDvm.methJavaLangReflectConstructor_init, "Ljava/lang/reflect/Constructor;",
          "(Ljava/lang/Class;[Ljava/lang/Class;[Ljava/lang/Class;I)V" },
        { &gDvm.methJavaLangReflectField_init, "Ljava/lang/reflect/Field;",
          "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;I)V" },
        { &gDvm.methJavaLangReflectMethod_init, "Ljava/lang/reflect/Method;",
          "(Ljava/lang/Class;[Ljava/lang/Class;[Ljava/lang/Class;Ljava/lang/Class;"
          "Ljava/lang/String;I)V" },
        { &gDvm.methJavaNioReadWriteDirectByteBuffer_init, "Ljava/nio/ReadWriteDirectByteBuffer;",
          "(II)V" },
        { &gDvm.methOrgApacheHarmonyLangAnnotationAnnotationMember_init,
          "Lorg/apache/harmony/lang/annotation/AnnotationMember;",
          "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/reflect/Method;)V" },
        { NULL, NULL, NULL }
    };

    int i;
    for (i = 0; constructors[i].method != NULL; i++) {
        if (!initDirectMethodReference(constructors[i].method, constructors[i].name,
                "<init>", constructors[i].descriptor)) {
            return false;
        }
    }

    return true;
}

static bool initDirectMethodReferences(void) {
    static struct {
        Method** method;
        const char* className;
        const char* name;
        const char* descriptor;
    } methods[] = {
        { &gDvm.methJavaLangClassLoader_getSystemClassLoader, "Ljava/lang/ClassLoader;",
          "getSystemClassLoader", "()Ljava/lang/ClassLoader;" },
        { &gDvm.methJavaLangReflectProxy_constructorPrototype, "Ljava/lang/reflect/Proxy;",
          "constructorPrototype", "(Ljava/lang/reflect/InvocationHandler;)V" },
        { &gDvm.methodTraceGcMethod, "Ldalvik/system/VMDebug;", "startGC", "()V" },
        { &gDvm.methodTraceClassPrepMethod, "Ldalvik/system/VMDebug;", "startClassPrep", "()V" },
        { &gDvm.methOrgApacheHarmonyLangAnnotationAnnotationFactory_createAnnotation,
          "Lorg/apache/harmony/lang/annotation/AnnotationFactory;", "createAnnotation",
          "(Ljava/lang/Class;[Lorg/apache/harmony/lang/annotation/AnnotationMember;)"
          "Ljava/lang/annotation/Annotation;" },
        { &gDvm.methDalvikSystemNativeStart_main, "Ldalvik/system/NativeStart;", "main", "([Ljava/lang/String;)V" },
        { &gDvm.methDalvikSystemNativeStart_run, "Ldalvik/system/NativeStart;", "run", "()V" },
        { &gDvm.methJavaLangRefFinalizerReferenceAdd,
          "Ljava/lang/ref/FinalizerReference;", "add", "(Ljava/lang/Object;)V" },
        { &gDvm.methDalvikDdmcServer_dispatch,
          "Lorg/apache/harmony/dalvik/ddmc/DdmServer;", "dispatch", "(I[BII)Lorg/apache/harmony/dalvik/ddmc/Chunk;" },
        { &gDvm.methDalvikDdmcServer_broadcast,
          "Lorg/apache/harmony/dalvik/ddmc/DdmServer;", "broadcast", "(I)V" },
        { &gDvm.methJavaLangRefReferenceQueueAdd,
          "Ljava/lang/ref/ReferenceQueue;", "add", "(Ljava/lang/ref/Reference;)V" },
        { NULL, NULL, NULL, NULL }
    };

    int i;
    for (i = 0; methods[i].method != NULL; i++) {
        if (!initDirectMethodReference(methods[i].method, methods[i].className,
                methods[i].name, methods[i].descriptor)) {
            return false;
        }
    }

    return true;
}

static bool initVirtualMethodOffset(int* pOffset, const char* className,
        const char* name, const char* descriptor) {
    ClassObject* clazz = dvmFindSystemClassNoInit(className);

    if (clazz == NULL) {
        LOGE("Could not find essential class %s for virtual method lookup\n", className);
        return false;
    }

    Method* method = dvmFindVirtualMethodByDescriptor(clazz, name, descriptor);

    if (method == NULL) {
        LOGE("Could not find essential virtual method %s.%s with descriptor %s\n",
                clazz->descriptor, name, descriptor);
        return false;
    }

    *pOffset = method->methodIndex;
    return true;
}

static bool initVirtualMethodOffsets(void) {
    static struct {
        int* offset;
        const char* className;
        const char* name;
        const char* descriptor;
    } methods[] = {
        { &gDvm.voffJavaLangClassLoader_loadClass, "Ljava/lang/ClassLoader;", "loadClass",
          "(Ljava/lang/String;)Ljava/lang/Class;" },
        { &gDvm.voffJavaLangObject_equals, "Ljava/lang/Object;", "equals",
          "(Ljava/lang/Object;)Z" },
        { &gDvm.voffJavaLangObject_hashCode, "Ljava/lang/Object;", "hashCode", "()I" },
        { &gDvm.voffJavaLangObject_toString, "Ljava/lang/Object;", "toString",
          "()Ljava/lang/String;" },
        { &gDvm.voffJavaLangThread_run, "Ljava/lang/Thread;", "run", "()V" },
        { &gDvm.voffJavaLangThreadGroup_removeThread, "Ljava/lang/ThreadGroup;",
          "removeThread", "(Ljava/lang/Thread;)V" },
        { NULL, NULL, NULL, NULL }
    };

    int i;
    for (i = 0; methods[i].offset != NULL; i++) {
        if (!initVirtualMethodOffset(methods[i].offset, methods[i].className,
                methods[i].name, methods[i].descriptor)) {
            return false;
        }
    }

    return true;
}

static bool initFinalizerReference()
{
    gDvm.classJavaLangRefFinalizerReference =
        dvmFindSystemClass("Ljava/lang/ref/FinalizerReference;");
    return gDvm.classJavaLangRefFinalizerReference != NULL;
}

static bool verifyStringOffset(const char* name, int actual, int expected) {
    if (actual != expected) {
        LOGE("InitRefs: String.%s offset = %d; expected %d\n", name, actual, expected);
        return false;
    }

    return true;
}

static bool verifyStringOffsets(void) {
    /*
     * Various parts of the system use predefined constants for the
     * offsets to a few fields of the class String. This code verifies
     * that the predefined offsets match what is actually defined by
     * the class.
     */

    bool ok = true;
    ok &= verifyStringOffset("value",    gDvm.offJavaLangString_value,  STRING_FIELDOFF_VALUE);
    ok &= verifyStringOffset("count",    gDvm.offJavaLangString_count,  STRING_FIELDOFF_COUNT);
    ok &= verifyStringOffset("offset",   gDvm.offJavaLangString_offset, STRING_FIELDOFF_OFFSET);
    ok &= verifyStringOffset("hashCode", gDvm.offJavaLangString_hashCode,
            STRING_FIELDOFF_HASHCODE);

    return ok;
}

/* (documented in header) */
bool dvmFindRequiredClassesAndMembers(void) {
    /*
     * Note: Under normal VM use, this is called by dvmStartup()
     * in Init.c. For dex optimization, this is called as well, but in
     * that case, the call is made from DexPrepare.c.
     */

    return initClassReferences()
        && initFieldOffsets()
        && initConstructorReferences()
        && initDirectMethodReferences()
        && initVirtualMethodOffsets()
        && initFinalizerReference()
        && verifyStringOffsets();
}

/* (documented in header) */
bool dvmFindReferenceMembers(ClassObject* classReference) {
    if (strcmp(classReference->descriptor, "Ljava/lang/ref/Reference;") != 0) {
        LOGE("Attempt to set up the wrong class as Reference\n");
        return false;
    }
    return initFieldOffset(classReference, &gDvm.offJavaLangRefReference_pendingNext,
                "pendingNext", "Ljava/lang/ref/Reference;")
        && initFieldOffset(classReference, &gDvm.offJavaLangRefReference_queue,
                "queue", "Ljava/lang/ref/ReferenceQueue;")
        && initFieldOffset(classReference, &gDvm.offJavaLangRefReference_queueNext,
                "queueNext", "Ljava/lang/ref/Reference;")
        && initFieldOffset(classReference, &gDvm.offJavaLangRefReference_referent,
                "referent", "Ljava/lang/Object;");
}