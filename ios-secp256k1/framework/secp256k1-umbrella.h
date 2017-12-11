#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "./secp256k1.framework/Versions/A/Headers/secp256k1.h"
#import "./secp256k1.framework/Versions/A/Headers/secp256k1_recovery.h"

FOUNDATION_EXPORT double libsodiumVersionNumber;
FOUNDATION_EXPORT const unsigned char libsodiumVersionString[];
