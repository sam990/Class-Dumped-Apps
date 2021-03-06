//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAEC25519PrivateKey, WAEC25519PublicKey;

@interface WAEC25519KeyPair : NSObject
{
    WAEC25519PublicKey *_publicKey;
    WAEC25519PrivateKey *_privateKey;
}

+ (id)generateKeyPair;
@property(readonly, nonatomic) WAEC25519PrivateKey *privateKey; // @synthesize privateKey=_privateKey;
@property(readonly, nonatomic) WAEC25519PublicKey *publicKey; // @synthesize publicKey=_publicKey;
- (void).cxx_destruct;
- (id)initWithPublicKey:(id)arg1 privateKey:(id)arg2;

@end

