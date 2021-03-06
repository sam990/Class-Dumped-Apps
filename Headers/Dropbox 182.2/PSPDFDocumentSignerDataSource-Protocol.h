//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKit/NSObject-Protocol.h>

@class NSString, PSPDFSignatureAppearance, PSPDFSignatureBiometricProperties, PSPDFSigner;

@protocol PSPDFDocumentSignerDataSource <NSObject>

@optional
- (unsigned long long)documentSigner:(PSPDFSigner *)arg1 signatureEncryptionAlgorithm:(NSString *)arg2;
- (unsigned long long)documentSigner:(PSPDFSigner *)arg1 signatureHashAlgorithm:(NSString *)arg2;
- (PSPDFSignatureBiometricProperties *)documentSigner:(PSPDFSigner *)arg1 signatureBiometricProperties:(NSString *)arg2;
- (int)documentSigner:(PSPDFSigner *)arg1 signatureEstimatedSize:(NSString *)arg2;
- (PSPDFSignatureAppearance *)documentSigner:(PSPDFSigner *)arg1 signatureAppearance:(NSString *)arg2;
@end

