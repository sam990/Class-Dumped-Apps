//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString, _TtC10SmartGlass26SGGetPhoneUserInfoResponse;

@protocol _TtP10SmartGlass34SGIPhoneFriendFinderServiceManager_
@property(readonly, nonatomic) _TtC10SmartGlass26SGGetPhoneUserInfoResponse *currentUser;
- (void)performScheduledContactUploadIfNeeded;
- (NSArray *)gatherContactPhoneNumbersAndReturnError:(id *)arg1;
- (_Bool)connectUserPhoneContacts:(NSString *)arg1 contactNumbers:(NSArray *)arg2 error:(id *)arg3 completion:(void (^)(_Bool, id))arg4;
- (_Bool)callUserToVerifyPhone:(NSString *)arg1 countryCode:(NSString *)arg2 error:(id *)arg3 completion:(void (^)(long long, id))arg4;
- (_Bool)ensureUserIsSearchableInXboxAndReturnError:(id *)arg1:(void (^)(long long, id))arg2;
- (_Bool)verifyUserPhoneInfo:(NSString *)arg1 countryCode:(NSString *)arg2 verificationNumber:(NSString *)arg3 error:(id *)arg4 completion:(void (^)(_Bool, id))arg5;
- (_Bool)deleteForUserPhone:(NSString *)arg1 countryCode:(NSString *)arg2 error:(id *)arg3 completion:(void (^)(long long, id))arg4;
- (_Bool)resendCodeForUserPhone:(NSString *)arg1 countryCode:(NSString *)arg2 error:(id *)arg3 completion:(void (^)(long long, id))arg4;
- (_Bool)connectUserPhoneInfo:(NSString *)arg1 countryCode:(NSString *)arg2 error:(id *)arg3 completion:(void (^)(long long, id))arg4;
- (void)getUserPhoneInfo:(_Bool)arg1 completion:(void (^)(_Bool, id))arg2;
@end

