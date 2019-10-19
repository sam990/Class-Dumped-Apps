//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class TIMPBNBatchMarkConversationReadRequestBody, TIMPBNCheckMessagePerUserRequestBody, TIMPBNConversationAddParticipantsRequestBody, TIMPBNConversationLeaveRequestBody, TIMPBNConversationParticipantsListRequestBody, TIMPBNConversationRemoveParticipantsRequestBody, TIMPBNConversationSetRoleRequestBody, TIMPBNConversationsListRequestBody, TIMPBNConversationsPerUserByFavoriteV2RequestBody, TIMPBNConversationsPerUserByTopV2RequestBody, TIMPBNCreateConversationRequestBody, TIMPBNCreateConversationV2RequestBody, TIMPBNDeleteConversationCoreExtInfoRequestBody, TIMPBNDeleteConversationRequestBody, TIMPBNDeleteConversationSettingExtInfoRequestBody, TIMPBNDeleteMessageRequestBody, TIMPBNDeleteStrangerAllConversationRequestBody, TIMPBNDeleteStrangerConversationRequestBody, TIMPBNDeleteStrangerMessageRequestBody, TIMPBNDissolveConversationRequestBody, TIMPBNGetConversationCoreInfoListRequestBody, TIMPBNGetConversationCoreInfoRequestBody, TIMPBNGetConversationInfoListRequestBody, TIMPBNGetConversationInfoListV2RequestBody, TIMPBNGetConversationInfoRequestBody, TIMPBNGetConversationInfoV2RequestBody, TIMPBNGetConversationParticipantsMinIndexV3RequestBody, TIMPBNGetConversationParticipantsReadIndexV3RequestBody, TIMPBNGetConversationSettingInfoRequestBody, TIMPBNGetGroupInfoListRequestBody, TIMPBNGetGroupInfoRequestBody, TIMPBNGetStrangerConversationListRequestBody, TIMPBNGetStrangerMessagesRequestBody, TIMPBNMarkConversationReadRequestBody, TIMPBNMarkStrangerAllConversationReadRequestBody, TIMPBNMarkStrangerConversationReadRequestBody, TIMPBNMessagesInConversationRequestBody, TIMPBNMessagesPerUserInitRequestBody, TIMPBNMessagesPerUserInitV2RequestBody, TIMPBNMessagesPerUserRequestBody, TIMPBNMgetConversationParticipantsRequestBody, TIMPBNModifyMessagePropertyRequestBody, TIMPBNReactionMessageRequestBody, TIMPBNRecallMessageRequestBody, TIMPBNReportGetMessagesCursorRequestBody, TIMPBNSendInputStatusRequestBody, TIMPBNSendMessageRequestBody, TIMPBNSendUserActionRequestBody, TIMPBNSetConversationCoreInfoRequestBody, TIMPBNSetConversationInfoRequestBody, TIMPBNSetConversationSettingInfoRequestBody, TIMPBNSetGroupInfoRequestBody, TIMPBNSyncMessageRequestBody, TIMPBNUpdateConversationParticipantRequestBody, TIMPBNUpsertConversationCoreExtInfoRequestBody, TIMPBNUpsertConversationSettingExtInfoRequestBody;

@interface TIMPBNRequestBody : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) TIMPBNBatchMarkConversationReadRequestBody *batchMarkReadBody; // @dynamic batchMarkReadBody;
@property(retain, nonatomic) TIMPBNCheckMessagePerUserRequestBody *checkMessagesPerUserBody; // @dynamic checkMessagesPerUserBody;
@property(retain, nonatomic) TIMPBNConversationAddParticipantsRequestBody *conversationAddParticipantsBody; // @dynamic conversationAddParticipantsBody;
@property(retain, nonatomic) TIMPBNConversationParticipantsListRequestBody *conversationParticipantsBody; // @dynamic conversationParticipantsBody;
@property(retain, nonatomic) TIMPBNConversationRemoveParticipantsRequestBody *conversationRemoveParticipantsBody; // @dynamic conversationRemoveParticipantsBody;
@property(retain, nonatomic) TIMPBNConversationSetRoleRequestBody *conversationSetRoleBody; // @dynamic conversationSetRoleBody;
@property(retain, nonatomic) TIMPBNConversationsListRequestBody *conversationsListBody; // @dynamic conversationsListBody;
@property(retain, nonatomic) TIMPBNCreateConversationRequestBody *createConversationBody; // @dynamic createConversationBody;
@property(retain, nonatomic) TIMPBNCreateConversationV2RequestBody *createConversationV2Body; // @dynamic createConversationV2Body;
@property(retain, nonatomic) TIMPBNDeleteConversationRequestBody *deleteConversationBody; // @dynamic deleteConversationBody;
@property(retain, nonatomic) TIMPBNDeleteConversationCoreExtInfoRequestBody *deleteConversationCoreExtInfoBody; // @dynamic deleteConversationCoreExtInfoBody;
@property(retain, nonatomic) TIMPBNDeleteConversationSettingExtInfoRequestBody *deleteConversationSettingExtInfoBody; // @dynamic deleteConversationSettingExtInfoBody;
@property(retain, nonatomic) TIMPBNDeleteMessageRequestBody *deleteMessageBody; // @dynamic deleteMessageBody;
@property(retain, nonatomic) TIMPBNDeleteStrangerAllConversationRequestBody *deleteStrangerAllConversationBody; // @dynamic deleteStrangerAllConversationBody;
@property(retain, nonatomic) TIMPBNDeleteStrangerConversationRequestBody *deleteStrangerConversationBody; // @dynamic deleteStrangerConversationBody;
@property(retain, nonatomic) TIMPBNDeleteStrangerMessageRequestBody *deleteStrangerMessageBody; // @dynamic deleteStrangerMessageBody;
@property(retain, nonatomic) TIMPBNDissolveConversationRequestBody *dissolveConversationBody; // @dynamic dissolveConversationBody;
@property(retain, nonatomic) TIMPBNGetConversationCoreInfoRequestBody *getConversationCoreInfoBody; // @dynamic getConversationCoreInfoBody;
@property(retain, nonatomic) TIMPBNGetConversationCoreInfoListRequestBody *getConversationCoreInfoListBody; // @dynamic getConversationCoreInfoListBody;
@property(retain, nonatomic) TIMPBNGetConversationInfoRequestBody *getConversationInfoBody; // @dynamic getConversationInfoBody;
@property(retain, nonatomic) TIMPBNGetConversationInfoListRequestBody *getConversationInfoListBody; // @dynamic getConversationInfoListBody;
@property(retain, nonatomic) TIMPBNConversationsPerUserByFavoriteV2RequestBody *getConversationInfoListByFavoriteV2Body; // @dynamic getConversationInfoListByFavoriteV2Body;
@property(retain, nonatomic) TIMPBNConversationsPerUserByTopV2RequestBody *getConversationInfoListByTopV2Body; // @dynamic getConversationInfoListByTopV2Body;
@property(retain, nonatomic) TIMPBNGetConversationInfoListV2RequestBody *getConversationInfoListV2Body; // @dynamic getConversationInfoListV2Body;
@property(retain, nonatomic) TIMPBNGetConversationInfoV2RequestBody *getConversationInfoV2Body; // @dynamic getConversationInfoV2Body;
@property(retain, nonatomic) TIMPBNGetConversationSettingInfoRequestBody *getConversationSettingInfoBody; // @dynamic getConversationSettingInfoBody;
@property(retain, nonatomic) TIMPBNGetGroupInfoRequestBody *getGroupInfoBody; // @dynamic getGroupInfoBody;
@property(retain, nonatomic) TIMPBNGetGroupInfoListRequestBody *getGroupInfoListBody; // @dynamic getGroupInfoListBody;
@property(retain, nonatomic) TIMPBNGetStrangerConversationListRequestBody *getStrangerConversationBody; // @dynamic getStrangerConversationBody;
@property(retain, nonatomic) TIMPBNGetStrangerMessagesRequestBody *getStrangerMessagesBody; // @dynamic getStrangerMessagesBody;
@property(nonatomic) _Bool hasBatchMarkReadBody; // @dynamic hasBatchMarkReadBody;
@property(nonatomic) _Bool hasCheckMessagesPerUserBody; // @dynamic hasCheckMessagesPerUserBody;
@property(nonatomic) _Bool hasConversationAddParticipantsBody; // @dynamic hasConversationAddParticipantsBody;
@property(nonatomic) _Bool hasConversationParticipantsBody; // @dynamic hasConversationParticipantsBody;
@property(nonatomic) _Bool hasConversationRemoveParticipantsBody; // @dynamic hasConversationRemoveParticipantsBody;
@property(nonatomic) _Bool hasConversationSetRoleBody; // @dynamic hasConversationSetRoleBody;
@property(nonatomic) _Bool hasConversationsListBody; // @dynamic hasConversationsListBody;
@property(nonatomic) _Bool hasCreateConversationBody; // @dynamic hasCreateConversationBody;
@property(nonatomic) _Bool hasCreateConversationV2Body; // @dynamic hasCreateConversationV2Body;
@property(nonatomic) _Bool hasDeleteConversationBody; // @dynamic hasDeleteConversationBody;
@property(nonatomic) _Bool hasDeleteConversationCoreExtInfoBody; // @dynamic hasDeleteConversationCoreExtInfoBody;
@property(nonatomic) _Bool hasDeleteConversationSettingExtInfoBody; // @dynamic hasDeleteConversationSettingExtInfoBody;
@property(nonatomic) _Bool hasDeleteMessageBody; // @dynamic hasDeleteMessageBody;
@property(nonatomic) _Bool hasDeleteStrangerAllConversationBody; // @dynamic hasDeleteStrangerAllConversationBody;
@property(nonatomic) _Bool hasDeleteStrangerConversationBody; // @dynamic hasDeleteStrangerConversationBody;
@property(nonatomic) _Bool hasDeleteStrangerMessageBody; // @dynamic hasDeleteStrangerMessageBody;
@property(nonatomic) _Bool hasDissolveConversationBody; // @dynamic hasDissolveConversationBody;
@property(nonatomic) _Bool hasGetConversationCoreInfoBody; // @dynamic hasGetConversationCoreInfoBody;
@property(nonatomic) _Bool hasGetConversationCoreInfoListBody; // @dynamic hasGetConversationCoreInfoListBody;
@property(nonatomic) _Bool hasGetConversationInfoBody; // @dynamic hasGetConversationInfoBody;
@property(nonatomic) _Bool hasGetConversationInfoListBody; // @dynamic hasGetConversationInfoListBody;
@property(nonatomic) _Bool hasGetConversationInfoListByFavoriteV2Body; // @dynamic hasGetConversationInfoListByFavoriteV2Body;
@property(nonatomic) _Bool hasGetConversationInfoListByTopV2Body; // @dynamic hasGetConversationInfoListByTopV2Body;
@property(nonatomic) _Bool hasGetConversationInfoListV2Body; // @dynamic hasGetConversationInfoListV2Body;
@property(nonatomic) _Bool hasGetConversationInfoV2Body; // @dynamic hasGetConversationInfoV2Body;
@property(nonatomic) _Bool hasGetConversationSettingInfoBody; // @dynamic hasGetConversationSettingInfoBody;
@property(nonatomic) _Bool hasGetGroupInfoBody; // @dynamic hasGetGroupInfoBody;
@property(nonatomic) _Bool hasGetGroupInfoListBody; // @dynamic hasGetGroupInfoListBody;
@property(nonatomic) _Bool hasGetStrangerConversationBody; // @dynamic hasGetStrangerConversationBody;
@property(nonatomic) _Bool hasGetStrangerMessagesBody; // @dynamic hasGetStrangerMessagesBody;
@property(nonatomic) _Bool hasLeaveConversationBody; // @dynamic hasLeaveConversationBody;
@property(nonatomic) _Bool hasMarkConversationReadBody; // @dynamic hasMarkConversationReadBody;
@property(nonatomic) _Bool hasMarkStrangerAllConversationReadBody; // @dynamic hasMarkStrangerAllConversationReadBody;
@property(nonatomic) _Bool hasMarkStrangerConversationReadBody; // @dynamic hasMarkStrangerConversationReadBody;
@property(nonatomic) _Bool hasMessagesInConversationBody; // @dynamic hasMessagesInConversationBody;
@property(nonatomic) _Bool hasMessagesPerUserBody; // @dynamic hasMessagesPerUserBody;
@property(nonatomic) _Bool hasMessagesPerUserInitBody; // @dynamic hasMessagesPerUserInitBody;
@property(nonatomic) _Bool hasMessagesPerUserInitV2Body; // @dynamic hasMessagesPerUserInitV2Body;
@property(nonatomic) _Bool hasMgetConversationParticipantsBody; // @dynamic hasMgetConversationParticipantsBody;
@property(nonatomic) _Bool hasModifyMessagePropertyBody; // @dynamic hasModifyMessagePropertyBody;
@property(nonatomic) _Bool hasParticipantsMinIndexBody; // @dynamic hasParticipantsMinIndexBody;
@property(nonatomic) _Bool hasParticipantsReadIndexBody; // @dynamic hasParticipantsReadIndexBody;
@property(nonatomic) _Bool hasReactionMessageBody; // @dynamic hasReactionMessageBody;
@property(nonatomic) _Bool hasRecallMessageBody; // @dynamic hasRecallMessageBody;
@property(nonatomic) _Bool hasReportConversationCursorBody; // @dynamic hasReportConversationCursorBody;
@property(nonatomic) _Bool hasSendInputStatusBody; // @dynamic hasSendInputStatusBody;
@property(nonatomic) _Bool hasSendMessageBody; // @dynamic hasSendMessageBody;
@property(nonatomic) _Bool hasSendUserActionBody; // @dynamic hasSendUserActionBody;
@property(nonatomic) _Bool hasSetConversationCoreInfoBody; // @dynamic hasSetConversationCoreInfoBody;
@property(nonatomic) _Bool hasSetConversationInfoBody; // @dynamic hasSetConversationInfoBody;
@property(nonatomic) _Bool hasSetConversationSettingInfoBody; // @dynamic hasSetConversationSettingInfoBody;
@property(nonatomic) _Bool hasSetGroupInfoBody; // @dynamic hasSetGroupInfoBody;
@property(nonatomic) _Bool hasSyncMessageBody; // @dynamic hasSyncMessageBody;
@property(nonatomic) _Bool hasUpdateConversationParticipantBody; // @dynamic hasUpdateConversationParticipantBody;
@property(nonatomic) _Bool hasUpsertConversationCoreExtInfoBody; // @dynamic hasUpsertConversationCoreExtInfoBody;
@property(nonatomic) _Bool hasUpsertConversationSettingExtInfoBody; // @dynamic hasUpsertConversationSettingExtInfoBody;
@property(retain, nonatomic) TIMPBNConversationLeaveRequestBody *leaveConversationBody; // @dynamic leaveConversationBody;
@property(retain, nonatomic) TIMPBNMarkConversationReadRequestBody *markConversationReadBody; // @dynamic markConversationReadBody;
@property(retain, nonatomic) TIMPBNMarkStrangerAllConversationReadRequestBody *markStrangerAllConversationReadBody; // @dynamic markStrangerAllConversationReadBody;
@property(retain, nonatomic) TIMPBNMarkStrangerConversationReadRequestBody *markStrangerConversationReadBody; // @dynamic markStrangerConversationReadBody;
@property(retain, nonatomic) TIMPBNMessagesInConversationRequestBody *messagesInConversationBody; // @dynamic messagesInConversationBody;
@property(retain, nonatomic) TIMPBNMessagesPerUserRequestBody *messagesPerUserBody; // @dynamic messagesPerUserBody;
@property(retain, nonatomic) TIMPBNMessagesPerUserInitRequestBody *messagesPerUserInitBody; // @dynamic messagesPerUserInitBody;
@property(retain, nonatomic) TIMPBNMessagesPerUserInitV2RequestBody *messagesPerUserInitV2Body; // @dynamic messagesPerUserInitV2Body;
@property(retain, nonatomic) TIMPBNMgetConversationParticipantsRequestBody *mgetConversationParticipantsBody; // @dynamic mgetConversationParticipantsBody;
@property(retain, nonatomic) TIMPBNModifyMessagePropertyRequestBody *modifyMessagePropertyBody; // @dynamic modifyMessagePropertyBody;
@property(retain, nonatomic) TIMPBNGetConversationParticipantsMinIndexV3RequestBody *participantsMinIndexBody; // @dynamic participantsMinIndexBody;
@property(retain, nonatomic) TIMPBNGetConversationParticipantsReadIndexV3RequestBody *participantsReadIndexBody; // @dynamic participantsReadIndexBody;
@property(retain, nonatomic) TIMPBNReactionMessageRequestBody *reactionMessageBody; // @dynamic reactionMessageBody;
@property(retain, nonatomic) TIMPBNRecallMessageRequestBody *recallMessageBody; // @dynamic recallMessageBody;
@property(retain, nonatomic) TIMPBNReportGetMessagesCursorRequestBody *reportConversationCursorBody; // @dynamic reportConversationCursorBody;
@property(retain, nonatomic) TIMPBNSendInputStatusRequestBody *sendInputStatusBody; // @dynamic sendInputStatusBody;
@property(retain, nonatomic) TIMPBNSendMessageRequestBody *sendMessageBody; // @dynamic sendMessageBody;
@property(retain, nonatomic) TIMPBNSendUserActionRequestBody *sendUserActionBody; // @dynamic sendUserActionBody;
@property(retain, nonatomic) TIMPBNSetConversationCoreInfoRequestBody *setConversationCoreInfoBody; // @dynamic setConversationCoreInfoBody;
@property(retain, nonatomic) TIMPBNSetConversationInfoRequestBody *setConversationInfoBody; // @dynamic setConversationInfoBody;
@property(retain, nonatomic) TIMPBNSetConversationSettingInfoRequestBody *setConversationSettingInfoBody; // @dynamic setConversationSettingInfoBody;
@property(retain, nonatomic) TIMPBNSetGroupInfoRequestBody *setGroupInfoBody; // @dynamic setGroupInfoBody;
@property(retain, nonatomic) TIMPBNSyncMessageRequestBody *syncMessageBody; // @dynamic syncMessageBody;
@property(retain, nonatomic) TIMPBNUpdateConversationParticipantRequestBody *updateConversationParticipantBody; // @dynamic updateConversationParticipantBody;
@property(retain, nonatomic) TIMPBNUpsertConversationCoreExtInfoRequestBody *upsertConversationCoreExtInfoBody; // @dynamic upsertConversationCoreExtInfoBody;
@property(retain, nonatomic) TIMPBNUpsertConversationSettingExtInfoRequestBody *upsertConversationSettingExtInfoBody; // @dynamic upsertConversationSettingExtInfoBody;

@end
