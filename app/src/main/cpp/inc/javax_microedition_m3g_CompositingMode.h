/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class javax_microedition_m3g_CompositingMode */

#ifndef _Included_javax_microedition_m3g_CompositingMode
#define _Included_javax_microedition_m3g_CompositingMode
#ifdef __cplusplus
extern "C" {
#endif
#undef javax_microedition_m3g_CompositingMode_ALPHA
#define javax_microedition_m3g_CompositingMode_ALPHA 64L
#undef javax_microedition_m3g_CompositingMode_ALPHA_ADD
#define javax_microedition_m3g_CompositingMode_ALPHA_ADD 65L
#undef javax_microedition_m3g_CompositingMode_MODULATE
#define javax_microedition_m3g_CompositingMode_MODULATE 66L
#undef javax_microedition_m3g_CompositingMode_MODULATE_X2
#define javax_microedition_m3g_CompositingMode_MODULATE_X2 67L
#undef javax_microedition_m3g_CompositingMode_REPLACE
#define javax_microedition_m3g_CompositingMode_REPLACE 68L
/*
 * Class:     javax_microedition_m3g_CompositingMode
 * Method:    _ctor
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_javax_microedition_m3g_CompositingMode__1ctor
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_CompositingMode
 * Method:    _setBlending
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_CompositingMode__1setBlending
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     javax_microedition_m3g_CompositingMode
 * Method:    _getBlending
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_javax_microedition_m3g_CompositingMode__1getBlending
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_CompositingMode
 * Method:    _setAlphaThreshold
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_CompositingMode__1setAlphaThreshold
  (JNIEnv *, jclass, jint, jfloat);

/*
 * Class:     javax_microedition_m3g_CompositingMode
 * Method:    _getAlphaThreshold
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_javax_microedition_m3g_CompositingMode__1getAlphaThreshold
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_CompositingMode
 * Method:    _setAlphaWriteEnable
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_CompositingMode__1setAlphaWriteEnable
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     javax_microedition_m3g_CompositingMode
 * Method:    _isAlphaWriteEnabled
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_javax_microedition_m3g_CompositingMode__1isAlphaWriteEnabled
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_CompositingMode
 * Method:    _enableDepthTest
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_CompositingMode__1enableDepthTest
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     javax_microedition_m3g_CompositingMode
 * Method:    _isDepthTestEnabled
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_javax_microedition_m3g_CompositingMode__1isDepthTestEnabled
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_CompositingMode
 * Method:    _enableDepthWrite
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_CompositingMode__1enableDepthWrite
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     javax_microedition_m3g_CompositingMode
 * Method:    _isDepthWriteEnabled
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_javax_microedition_m3g_CompositingMode__1isDepthWriteEnabled
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_CompositingMode
 * Method:    _enableColorWrite
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_CompositingMode__1enableColorWrite
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     javax_microedition_m3g_CompositingMode
 * Method:    _isColorWriteEnabled
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_javax_microedition_m3g_CompositingMode__1isColorWriteEnabled
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_CompositingMode
 * Method:    _setDepthOffset
 * Signature: (IFF)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_CompositingMode__1setDepthOffset
  (JNIEnv *, jclass, jint, jfloat, jfloat);

/*
 * Class:     javax_microedition_m3g_CompositingMode
 * Method:    _getDepthOffsetFactor
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_javax_microedition_m3g_CompositingMode__1getDepthOffsetFactor
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_CompositingMode
 * Method:    _getDepthOffsetUnits
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_javax_microedition_m3g_CompositingMode__1getDepthOffsetUnits
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif