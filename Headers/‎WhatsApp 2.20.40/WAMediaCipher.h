//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, WAMediaKey, _WAMediaSidecarGenerator;

@interface WAMediaCipher : NSObject
{
    _Bool _complete;
    unsigned int _operation;
    struct _CCCryptor *_aesRef;
    struct CC_SHA256state_st _plaintextHashCtx;
    struct CC_SHA256state_st _ciphertextHashCtx;
    CDStruct_43cfb2c2 _hmacCtx;
    _WAMediaSidecarGenerator *_sidecarGenerator;
    WAMediaKey *_mediaKey;
    NSData *_plaintextHash;
    NSData *_ciphertextAndTruncatedMacHash;
    NSData *_hmac;
}

+ (_Bool)decryptMediaChunkAtPath:(id)arg1 toPath:(id)arg2 withMediaKey:(id)arg3 chunkOffset:(unsigned long long)arg4 chunkLength:(unsigned long long)arg5 chunkHMAC:(id)arg6 isLastChunk:(_Bool)arg7;
+ (_Bool)decryptMediaFileAtPath:(id)arg1 toPath:(id)arg2 withMediaKey:(id)arg3 plaintextHash:(out id *)arg4 ciphertextHash:(out id *)arg5;
+ (id)mediaCipherAfterEncryptingWithMediaKey:(id)arg1 sidecarConfig:(id)arg2 fromFileURL:(id)arg3 destinationFileURL:(id)arg4;
+ (id)mediaCipherAfterEncryptingWithMediaKey:(id)arg1 sidecarConfig:(id)arg2 fromFileURL:(id)arg3;
+ (id)calculateDigestOfFileAtPath:(id)arg1;
+ (id)mediaCipherForDecryptionWithMediaKey:(id)arg1 iv:(id)arg2 ignorePadding:(_Bool)arg3;
+ (id)mediaCipherForDecryptionWithMediaKey:(id)arg1 ignorePadding:(_Bool)arg2;
+ (id)mediaCipherForEncryptionWithMediaKey:(id)arg1 sidecarConfig:(id)arg2;
+ (id)mediaCipherForEncryptionWithMediaKey:(id)arg1 sidecarConfig:(id)arg2 withFileReader:(id)arg3 seekToOffset:(unsigned long long)arg4 readBuffer:(id)arg5 writeBuffer:(id)arg6;
@property(readonly, nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) NSData *hmac; // @synthesize hmac=_hmac;
@property(readonly, nonatomic) NSData *ciphertextAndTruncatedMacHash; // @synthesize ciphertextAndTruncatedMacHash=_ciphertextAndTruncatedMacHash;
@property(readonly, nonatomic) NSData *plaintextHash; // @synthesize plaintextHash=_plaintextHash;
@property(readonly, nonatomic) WAMediaKey *mediaKey; // @synthesize mediaKey=_mediaKey;
- (void).cxx_destruct;
- (unsigned long long)outputLengthForInputLength:(unsigned long long)arg1 final:(_Bool)arg2;
- (void)updateAdditionalResultsWithPlaintextIn:(const void *)arg1 plaintextLength:(unsigned long long)arg2 ciphertextIn:(const void *)arg3 ciphertextLength:(unsigned long long)arg4 fileHMACCiphertextAppendix:(const void *)arg5 final:(_Bool)arg6;
- (void)updateAdditionalResultsWithPlaintextIn:(const void *)arg1 plaintextLength:(unsigned long long)arg2 ciphertextIn:(const void *)arg3 ciphertextLength:(unsigned long long)arg4 final:(_Bool)arg5;
- (_Bool)finalizeWithDataOut:(void *)arg1 dataOutAvailable:(unsigned long long)arg2 fileHMACCiphertextAppendix:(const void *)arg3 dataOutMoved:(unsigned long long *)arg4;
- (_Bool)finalizeForDecryptionWithDataOut:(void *)arg1 dataOutAvailable:(unsigned long long)arg2 fileHMACCiphertextAppendix:(const void *)arg3 dataOutMoved:(unsigned long long *)arg4;
- (_Bool)finalizeForEncryptionWithDataOut:(void *)arg1 dataOutAvailable:(unsigned long long)arg2 dataOutMoved:(unsigned long long *)arg3;
- (_Bool)updateWithDataIn:(const void *)arg1 dataInLength:(unsigned long long)arg2 dataOut:(void *)arg3 dataOutLength:(unsigned long long)arg4 dataOutMoved:(unsigned long long *)arg5;
@property(readonly, nonatomic) NSData *sidecar;
- (void)dealloc;
- (id)initWithMediaKey:(id)arg1 sidecarConfig:(id)arg2 iv:(id)arg3 encrypt:(_Bool)arg4 ignorePadding:(_Bool)arg5;
- (_Bool)seekToOffset:(unsigned long long)arg1 withFileReader:(id)arg2 usingReadBuffer:(id)arg3 andWriteBuffer:(id)arg4;

@end

