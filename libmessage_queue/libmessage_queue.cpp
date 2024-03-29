// libmessage_queue.cpp : DLL 응용 프로그램을 위해 내보낸 함수를 정의합니다.
//
#include "stdafx.h"

#include "jni_init.h"
#include "java_callback.h"

/////////////////////////////////////////////////////////////////////////
// implements native method
////////////////////////////////////////////////////////////////////////

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CPWSWAOC
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CPWSWAOC
(JNIEnv *env, jobject thisObj, jbyteArray msg, jint len)
{
	return java_callback_send(__FUNCTION__, env, thisObj, msg, len);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CPWRWAOC
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CPWRWAOC
(JNIEnv *env, jobject thisObj, jbyteArray msg, jint len)
{
	return java_callback_send(__FUNCTION__, env, thisObj, msg, len);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CP02WAOC
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CP02WAOC
(JNIEnv *env, jobject thisObj, jbyteArray msg, jint len)
{
	return java_callback_send(__FUNCTION__, env, thisObj, msg, len);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CP03WAOC
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CP03WAOC
(JNIEnv *env, jobject thisObj, jbyteArray msg, jint len)
{
	return java_callback_send(__FUNCTION__, env, thisObj, msg, len);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CP04WAOC
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CP04WAOC
(JNIEnv *env, jobject thisObj, jbyteArray msg, jint len)
{
	return java_callback_send(__FUNCTION__, env, thisObj, msg, len);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CP05WAOC
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CP05WAOC
(JNIEnv *env, jobject thisObj, jbyteArray msg, jint len)
{
	return java_callback_send(__FUNCTION__, env, thisObj, msg, len);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CP12WAOC
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CP12WAOC
(JNIEnv *env, jobject thisObj, jbyteArray msg, jint len)
{
	return java_callback_send(__FUNCTION__, env, thisObj, msg, len);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CPWRDAIC
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CPWRDAIC
(JNIEnv *env, jobject thisObj)
{
	return java_callback_recv(__FUNCTION__, env, thisObj);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CPWSDAIC
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CPWSDAIC
(JNIEnv *env, jobject thisObj)
{
	return java_callback_recv(__FUNCTION__, env, thisObj);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CPWSDAOC
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CPWSDAOC
(JNIEnv *env, jobject thisObj, jbyteArray msg, jint len)
{
	return java_callback_send(__FUNCTION__, env, thisObj, msg, len);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CPWRDAOC
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CPWRDAOC
(JNIEnv *env, jobject thisObj, jbyteArray msg, jint len)
{
	return java_callback_send(__FUNCTION__, env, thisObj, msg, len);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CPWSWAIC
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CPWSWAIC
(JNIEnv *env, jobject thisObj)
{
	return java_callback_recv(__FUNCTION__, env, thisObj);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CPMADAOC
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CPMADAOC
(JNIEnv *env, jobject thisObj, jbyteArray msg, jint len)
{
	return java_callback_send(__FUNCTION__, env, thisObj, msg, len);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CPMADAIC
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CPMADAIC
(JNIEnv *env, jobject thisObj)
{
	return java_callback_recv(__FUNCTION__, env, thisObj);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CPAMDAOC
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CPAMDAOC
(JNIEnv *env, jobject thisObj, jbyteArray msg, jint len)
{
	return java_callback_send(__FUNCTION__, env, thisObj, msg, len);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CPAMDAIC
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CPAMDAIC
(JNIEnv *env, jobject thisObj)
{
	return java_callback_recv(__FUNCTION__, env, thisObj);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CPHFJAOC
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CPHFJAOC
(JNIEnv *env, jobject thisObj, jbyteArray msg, jint len)
{
	return java_callback_send(__FUNCTION__, env, thisObj, msg, len);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CPHFNAIC
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CPHFNAIC
(JNIEnv *env, jobject thisObj)
{
	return java_callback_recv(__FUNCTION__, env, thisObj);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CPBFJAOC
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CPBFJAOC
(JNIEnv *env, jobject thisObj, jbyteArray msg, jint len)
{
	return java_callback_send(__FUNCTION__, env, thisObj, msg, len);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CPBFNAIC
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CPBFNAIC
(JNIEnv *env, jobject thisObj)
{
	return java_callback_recv(__FUNCTION__, env, thisObj);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CPFHJAOC
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CPFHJAOC
(JNIEnv *env, jobject thisObj, jbyteArray msg, jint len)
{
	return java_callback_send(__FUNCTION__, env, thisObj, msg, len);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CPFHCAOC
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CPFHCAOC
(JNIEnv *env, jobject thisObj, jbyteArray msg, jint len)
{
	return java_callback_send(__FUNCTION__, env, thisObj, msg, len);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CPFHJAIC
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CPFHJAIC
(JNIEnv *env, jobject thisObj)
{
	return java_callback_recv(__FUNCTION__, env, thisObj);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CPHJNAOC
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CPHJNAOC
(JNIEnv *env, jobject thisObj, jbyteArray msg, jint len)
{
	return java_callback_send(__FUNCTION__, env, thisObj, msg, len);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CPHCNAOC
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CPHCNAOC
(JNIEnv *env, jobject thisObj, jbyteArray msg, jint len)
{
	return java_callback_send(__FUNCTION__, env, thisObj, msg, len);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CPHFJAIC
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CPHFJAIC
(JNIEnv *env, jobject thisObj, jbyteArray msg, jint len)
{
	return java_callback_send(__FUNCTION__, env, thisObj, msg, len);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CP99EAIC
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CP99EAIC
(JNIEnv *env, jobject thisObj)
{
	return java_callback_recv(__FUNCTION__, env, thisObj);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CP99AAIC
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CP99AAIC
(JNIEnv *env, jobject thisObj)
{
	return java_callback_recv(__FUNCTION__, env, thisObj);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CP99VAIC
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CP99VAIC
(JNIEnv *env, jobject thisObj)
{
	return java_callback_recv(__FUNCTION__, env, thisObj);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CP99CAOC
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CP99CAOC
(JNIEnv *env, jobject thisObj, jbyteArray msg, jint len)
{
	return java_callback_send(__FUNCTION__, env, thisObj, msg, len);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CP99AAOC
 * Signature: (I[BI)I
 */
JNIEXPORT jint JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CP99AAOC
(JNIEnv *env, jobject thisObj, jbyteArray msg, jint len)
{
	return java_callback_send(__FUNCTION__, env, thisObj, msg, len);
}

/*
 * Class:     com_bankorea_solbus_jni_MessageQueue
 * Method:    CP99VAOC
 * Signature: (I[BI)I
 */
JNIEXPORT jint JNICALL Java_com_bankorea_solbus_jni_MessageQueue_CP99VAOC
(JNIEnv *env, jobject thisObj, jbyteArray msg, jint len)
{
	return java_callback_send(__FUNCTION__, env, thisObj, msg, len);
}

