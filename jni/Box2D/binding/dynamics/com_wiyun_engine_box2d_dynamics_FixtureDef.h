/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_box2d_dynamics_FixtureDef */

#ifndef _Included_com_wiyun_engine_box2d_dynamics_FixtureDef
#define _Included_com_wiyun_engine_box2d_dynamics_FixtureDef
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wiyun_engine_box2d_dynamics_FixtureDef
 * Method:    nativeNew
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_FixtureDef_nativeNew
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_FixtureDef
 * Method:    setShape
 * Signature: (Lcom/wiyun/engine/box2d/collision/Shape;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_FixtureDef_setShape
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_FixtureDef
 * Method:    getShape
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_box2d_dynamics_FixtureDef_getShape
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_FixtureDef
 * Method:    setFriction
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_FixtureDef_setFriction
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_FixtureDef
 * Method:    getFriction
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_FixtureDef_getFriction
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_FixtureDef
 * Method:    setRestitution
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_FixtureDef_setRestitution
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_FixtureDef
 * Method:    getRestitution
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_FixtureDef_getRestitution
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_FixtureDef
 * Method:    setDensity
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_FixtureDef_setDensity
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_FixtureDef
 * Method:    getDensity
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_FixtureDef_getDensity
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_FixtureDef
 * Method:    setSensor
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_FixtureDef_setSensor
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_FixtureDef
 * Method:    isSensor
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_box2d_dynamics_FixtureDef_isSensor
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_FixtureDef
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_FixtureDef_destroy
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_FixtureDef
 * Method:    setFilter
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_FixtureDef_setFilter
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_FixtureDef
 * Method:    setFilterCategory
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_FixtureDef_setFilterCategory
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_FixtureDef
 * Method:    setFilterMask
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_FixtureDef_setFilterMask
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_FixtureDef
 * Method:    setFilterGroupIndex
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_FixtureDef_setFilterGroupIndex
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_FixtureDef
 * Method:    nativeGetFilter
 * Signature: (Lcom/wiyun/engine/box2d/dynamics/Filter;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_FixtureDef_nativeGetFilter
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_FixtureDef
 * Method:    getUserData
 * Signature: ()Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_wiyun_engine_box2d_dynamics_FixtureDef_getUserData
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_FixtureDef
 * Method:    setUserData
 * Signature: (Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_FixtureDef_setUserData
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
