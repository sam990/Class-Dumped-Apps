//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWECreateRepostRequestModel, NSString;

@protocol AWERepostAwemeManagerProtocol <NSObject>
+ (void)deleteRepostWithRepostId:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
+ (void)createRepostWithModel:(AWECreateRepostRequestModel *)arg1 completion:(void (^)(AWECreateRepostResponseModel *, NSError *))arg2;
@end

