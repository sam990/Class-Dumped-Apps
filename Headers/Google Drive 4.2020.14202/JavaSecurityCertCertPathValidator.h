//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaSecurityCertCertPathValidatorSpi, JavaSecurityProvider, NSString;

@interface JavaSecurityCertCertPathValidator : NSObject
{
    JavaSecurityCertCertPathValidatorSpi *validatorSpi_;
    JavaSecurityProvider *provider_;
    NSString *algorithm_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)getDefaultType;
+ (id)getInstanceWithNSString:(id)arg1 withJavaSecurityProvider:(id)arg2;
+ (id)getInstanceWithNSString:(id)arg1 withNSString:(id)arg2;
+ (id)getInstanceWithNSString:(id)arg1;
- (void)dealloc;
- (id)getRevocationChecker;
- (id)validateWithJavaSecurityCertCertPath:(id)arg1 withJavaSecurityCertCertPathParameters:(id)arg2;
- (id)getAlgorithm;
- (id)getProvider;
- (id)initWithJavaSecurityCertCertPathValidatorSpi:(id)arg1 withJavaSecurityProvider:(id)arg2 withNSString:(id)arg3;

@end

