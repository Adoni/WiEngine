/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_nodes_TextureNode */

#ifndef _Included_com_wiyun_engine_nodes_TextureNode
#define _Included_com_wiyun_engine_nodes_TextureNode
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_nativeInit
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    isFlipX
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_TextureNode_isFlipX
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    setFlipX
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_setFlipX
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    isFlipY
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_TextureNode_isFlipY
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    setFlipY
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_setFlipY
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    isDither
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_TextureNode_isDither
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    setDither
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_setDither
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    setDisplayFrame
 * Signature: (Lcom/wiyun/engine/nodes/Frame;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_setDisplayFrame__Lcom_wiyun_engine_nodes_Frame_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    setDisplayFrame
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_setDisplayFrame__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    isFrameDisplayed
 * Signature: (Lcom/wiyun/engine/nodes/Frame;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_TextureNode_isFrameDisplayed
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    nativeGetDisplayFrame
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_TextureNode_nativeGetDisplayFrame
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    addAnimation
 * Signature: (Lcom/wiyun/engine/nodes/Animation;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_addAnimation
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    nativeGetAnimationById
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_TextureNode_nativeGetAnimationById
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    setTextureRect
 * Signature: (Lcom/wiyun/engine/types/WYRect;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_setTextureRect
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    nativegetTextureRect
 * Signature: (Lcom/wiyun/engine/types/WYRect;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_nativeGetTextureRect
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    setRotatedZwoptex
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_setRotatedZwoptex
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    isRotatedZwoptex
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_TextureNode_isRotatedZwoptex
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    setAutoFit
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_setAutoFit
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    isAutoFit
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_TextureNode_isAutoFit
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    nativeMakeFrame
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_TextureNode_nativeMakeFrame
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif