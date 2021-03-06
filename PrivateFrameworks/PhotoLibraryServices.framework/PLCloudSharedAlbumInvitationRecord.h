/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSDate, NSNumber, NSString, PLCloudSharedAlbum;

@interface PLCloudSharedAlbumInvitationRecord : PLManagedObject {
}

@property(retain) PLCloudSharedAlbum * album;
@property(retain) NSString * albumGUID;
@property(retain) NSString * cloudGUID;
@property(retain) NSNumber * invitationState;
@property(retain) NSNumber * invitationStateLocal;
@property NSNumber * inviteeEmailKey;
@property(readonly) NSArray * inviteeEmails;
@property(retain) NSString * inviteeFirstName;
@property(retain) NSString * inviteeFullName;
@property NSString * inviteeHashedPersonID;
@property(retain) NSString * inviteeLastName;
@property(readonly) NSArray * inviteePhones;
@property(retain) NSDate * inviteeSubscriptionDate;
@property bool isMine;

+ (id)cloudSharedAlbumInvitationRecordWithGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)cloudSharedAlbumInvitationRecordsWithAlbumGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertNewInvitationRecordIntoAlbum:(id)arg1 withFirstName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 emails:(id)arg5 phones:(id)arg6 inLibrary:(id)arg7;

- (void)awakeFromInsert;
- (void)dealloc;
- (void)delete;
- (id)init;
- (id)invitationStateDescription;
- (id)inviteeDisplayNameIncludingEmail:(bool)arg1;
- (id)inviteeEmails;
- (id)inviteePhones;
- (void)prepareForDeletion;
- (void)setInviteeEmails:(id)arg1 phones:(id)arg2;
- (void)willSave;

@end
