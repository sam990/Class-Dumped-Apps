//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaSecurityKeyStore_ProtectionParameter-Protocol.h"
#import "JavaxSecurityAuthDestroyable-Protocol.h"

@class IOSCharArray, NSString;

@interface JavaSecurityKeyStore_PasswordProtection : NSObject <JavaSecurityKeyStore_ProtectionParameter, JavaxSecurityAuthDestroyable>
{
    IOSCharArray *password_;
    // Error parsing type: AB, name: destroyed_
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (_Bool)isDestroyed;
- (void)destroy;
- (id)getPassword;
- (id)initWithCharArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

