//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDirectMessageViewModelProtocol-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectReshareMessageHeaderViewModel-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectReshareMessageMediaViewModel-Protocol.h>
#import <InstagramAppCoreFramework/IGListDiffable-Protocol.h>

@class IGDirectMessageCellViewModel, IGDirectMessageMetadata, IGDirectReshareDiffIdentifier, IGUser, NSArray, NSString;

@interface IGDirectProfileMessageViewModel : NSObject <IGDirectMessageViewModelProtocol, IGDirectReshareMessageHeaderViewModel, IGDirectReshareMessageMediaViewModel, IGListDiffable>
{
    struct CGSize _contentSize;
    IGDirectReshareDiffIdentifier *_diffId;
    NSArray *_previewMedia;
    IGDirectMessageMetadata *_messageMetadata;
    IGDirectMessageCellViewModel *_messageCellViewModel;
    NSString *_contentType;
    IGUser *_sharedUser;
}

@property(readonly, nonatomic) IGUser *sharedUser; // @synthesize sharedUser=_sharedUser;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) IGDirectMessageCellViewModel *messageCellViewModel; // @synthesize messageCellViewModel=_messageCellViewModel;
@property(readonly, nonatomic) IGDirectMessageMetadata *messageMetadata; // @synthesize messageMetadata=_messageMetadata;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (double)thumbnailSize;
- (id)resharePreviewMedia;
- (id)module;
- (unsigned long long)headerImageBadgeImageAsset;
- (id)headerImageURL;
- (id)reshareSubtitle;
- (id)reshareTitle;
- (id)theme;
- (_Bool)isChevronHidden;
- (_Bool)senderIsCurrentUser;
@property(readonly, nonatomic) struct CGSize contentSize;
- (double)contentHeight;
- (id)initWithProfileMessage:(id)arg1 messageCellViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

