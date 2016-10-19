/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class quake_jni_Natives */

#ifndef _Included_quake_jni_Natives
#define _Included_quake_jni_Natives
#ifdef __cplusplus
extern "C" {
#endif
#undef quake_jni_Natives_EV_KEYDOWN
#define quake_jni_Natives_EV_KEYDOWN 0L
#undef quake_jni_Natives_EV_KEYUP
#define quake_jni_Natives_EV_KEYUP 1L
#undef quake_jni_Natives_EV_MOUSE
#define quake_jni_Natives_EV_MOUSE 2L
#undef quake_jni_Natives_CMD_SINGLE_PLAYER
#define quake_jni_Natives_CMD_SINGLE_PLAYER 0L
#undef quake_jni_Natives_CMD_MULTI_PLAYER_NEW
#define quake_jni_Natives_CMD_MULTI_PLAYER_NEW 1L
/*
 * Class:     quake_jni_Natives
 * Method:    QuakeMain
 * Signature: ([Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_quake_jni_Natives_QuakeMain
  (JNIEnv *, jclass, jobjectArray);

/*
 * Class:     quake_jni_Natives
 * Method:    RenderFrame
 * Signature: ([Ljava/lang/String;)I
 */
/* 
JNIEXPORT jint JNICALL Java_quake_jni_Natives_RenderFrame
  (JNIEnv *, jclass);
*/
  
/*
 * Class:     quake_jni_Natives
 * Method:    keyPress
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_quake_jni_Natives_keyPress
  (JNIEnv *, jclass, jint);

/*
 * Class:     quake_jni_Natives
 * Method:    keyRelease
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_quake_jni_Natives_keyRelease
  (JNIEnv *, jclass, jint);

  
JNIEXPORT jint JNICALL Java_quake_jni_Natives_mouseMove
  (JNIEnv * env, jclass cls, jint mx, jint my);
  
/*
 * Class:     quake_jni_Natives
 * Method:    sendCommand
 * Signature: (I)I
 */
JNIEXPORT jboolean JNICALL Java_quake_jni_Natives_sendCommand
  (JNIEnv *, jclass, jstring);

/*
 * Class:     quake_jni_Natives
 * Method:    FindKeysForCommand
 * Signature: (Ljava/lang/String;[I[Ljava/lang/String;)I
 */
/* 
JNIEXPORT jint JNICALL Java_quake_jni_Natives_FindKeysForCommand
  (JNIEnv *, jclass, jstring, jintArray, jobjectArray);
*/
/*
 * Class:     quake_jni_Natives
 * Method:    SetKeyBinding
 * Signature: (II)I
 */
/* 
JNIEXPORT jint JNICALL Java_quake_jni_Natives_SetKeyBinding
  (JNIEnv *, jclass, jint, jint);
*/

/*
 * Class:     quake_jni_Natives
 * Method:    GetNewMPGameInfo
 * Signature: ([Ljava/lang/String;)I
 */
/* 
JNIEXPORT jint JNICALL Java_quake_jni_Natives_GetNewMPGameInfo
  (JNIEnv *, jclass, jobjectArray);
*/

/*
 * Class:     quake_jni_Natives
 * Method:    JoinMultiPlayerGame
 * Signature: (Ljava/lang/String;I)I
 */
/* 
JNIEXPORT jint JNICALL Java_quake_jni_Natives_JoinMultiPlayerGame
  (JNIEnv *, jclass, jstring, jint);
*/

/*
 * Class:     quake_jni_Natives
 * Method:    SysQuit
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_quake_jni_Natives_SysQuit
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif