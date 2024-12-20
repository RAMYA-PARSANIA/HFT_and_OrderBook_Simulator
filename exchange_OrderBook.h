/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class exchange_OrderBook */

#ifndef _Included_exchange_OrderBook
#define _Included_exchange_OrderBook
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     exchange_OrderBook
 * Method:    createOrderBook
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_exchange_OrderBook_createOrderBook
  (JNIEnv *, jobject);

/*
 * Class:     exchange_OrderBook
 * Method:    destroyOrderBook
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_exchange_OrderBook_destroyOrderBook
  (JNIEnv *, jobject);

/*
 * Class:     exchange_OrderBook
 * Method:    addOrder
 * Signature: (Ljava/lang/String;Ljava/lang/String;DI)V
 */
JNIEXPORT void JNICALL Java_exchange_OrderBook_addOrder
  (JNIEnv *, jobject, jstring, jstring, jdouble, jint);

/*
 * Class:     exchange_OrderBook
 * Method:    cancelOrder
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_exchange_OrderBook_cancelOrder
  (JNIEnv *, jobject, jstring);

/*
 * Class:     exchange_OrderBook
 * Method:    getBestBid
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_exchange_OrderBook_getBestBid
  (JNIEnv *, jobject);

/*
 * Class:     exchange_OrderBook
 * Method:    getBestAsk
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_exchange_OrderBook_getBestAsk
  (JNIEnv *, jobject);

/*
 * Class:     exchange_OrderBook
 * Method:    matchBuyOrder
 * Signature: (Ljava/lang/String;Ljava/lang/String;DI)[[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_exchange_OrderBook_matchBuyOrder
  (JNIEnv *, jobject, jstring, jstring, jdouble, jint);

/*
 * Class:     exchange_OrderBook
 * Method:    matchSellOrder
 * Signature: (Ljava/lang/String;Ljava/lang/String;DI)[[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_exchange_OrderBook_matchSellOrder
  (JNIEnv *, jobject, jstring, jstring, jdouble, jint);

#ifdef __cplusplus
}
#endif
#endif
