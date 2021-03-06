//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoSerializable-Protocol.h"
#import "JavaSecurityPrincipal-Protocol.h"

@class NSString, SunSecurityX509X500Name;

@interface JavaxSecurityAuthX500X500Principal : NSObject <JavaSecurityPrincipal, JavaIoSerializable>
{
    SunSecurityX509X500Name *thisX500Name_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)getEncoded;
- (id)getNameWithNSString:(id)arg1 withJavaUtilMap:(id)arg2;
- (id)getNameWithNSString:(id)arg1;
- (id)getName;
- (id)initWithJavaIoInputStream:(id)arg1;
- (id)initWithByteArray:(id)arg1;
- (id)initWithNSString:(id)arg1 withJavaUtilMap:(id)arg2;
- (id)initWithNSString:(id)arg1;
- (id)initWithSunSecurityX509X500Name:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

