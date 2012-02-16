/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/DAEAS-Structs.h>
#import <DAEAS/XXUnknownSuperclass.h>
#import <DAEAS/ASAccount.h>

@class ASFolderHierarchy, NSMutableSet, ASTaskManager, ASProtocol, NSLock, NSMutableArray, ASAutodiscoverTask;

@interface ASAccount : XXUnknownSuperclass {
	ASFolderHierarchy *_folderHierarchy;	// 64 = 0x40
	ASTaskManager *_taskManager;	// 68 = 0x44
	ASProtocol *_protocol;	// 72 = 0x48
	NSMutableSet *_searchTaskSet;	// 76 = 0x4c
	NSMutableArray *_autodiscoveryServersToTry;	// 80 = 0x50
	NSLock *_autodiscoverTaskLock;	// 84 = 0x54
	ASAutodiscoverTask *_autodiscoverTask;	// 88 = 0x58
	BOOL _useHTTPForTesting;	// 92 = 0x5c
	BOOL _useLocalhostForAutodiscoveryTesting;	// 93 = 0x5d
	BOOL _isValidating;	// 94 = 0x5e
}
@property(assign, setter=setASAccountVersion:) int asAccountVersion;	// G=0x1fbe1; S=0x1fc15; 
@property(readonly, assign) int mailNumberOfPastDaysToSyncUpperLimit;	// G=0x20231; 
@property(assign) int mailNumberOfPastDaysToSync;	// G=0x202dd; S=0x2034d; 
@property(retain) id encryptionIdentityPersistentReference;	// G=0x20575; S=0x20591; converted property
@property(retain) id signingIdentityPersistentReference;	// G=0x20511; S=0x2052d; converted property
@property(retain) id lastKnownProtocolVersion;	// G=0x20369; S=0x204dd; converted property
@property(retain) id savedFolderPathsThatClientsCareAbout;	// G=0x203f9; S=0x20415; converted property
@property(retain) id emailAddresses;	// G=0x1ff6d; S=0x1ffe9; converted property
@property(retain) id emailAddress;	// G=0x1fed5; S=0x1fef1; converted property
@property(assign) BOOL useSSL;	// G=0x1fe4d; S=0x1fe6d; converted property
@property(assign) int port;	// G=0x1fe15; S=0x1fe31; converted property
@property(retain) id host;	// G=0x1fd7d; S=0x1fd99; converted property
@property(retain) id username;	// G=0x1fc59; S=0x1fc75; converted property
@property(readonly, retain) ASTaskManager *taskManager;	// G=0x1a351; converted property
@property(readonly, retain) ASProtocol *protocol;	// G=0x20711; converted property
+ (id)supportedDataclasses;	// 0x1a79d
+ (id)defaultProperties;	// 0x1a621
+ (void)cleanUpFilesForAccountWithId:(id)anId;	// 0x1a3dd
+ (Class)accountClass;	// 0x1a165
- (id)localizedInvalidPasswordMessage;	// 0x20c35
- (id)localizedIdenticalAccountFailureMessage;	// 0x20b85
- (BOOL)isEqualToAccount:(id)account;	// 0x20959
- (BOOL)isGoogleAccount;	// 0x208f5
- (BOOL)isHotmailAccount;	// 0x20891
- (BOOL)isActiveSyncAccount;	// 0x2088d
- (id)domainOnly;	// 0x2081d
- (void)accountDidUpdateProtocolVersion;	// 0x20819
- (id)addressBookConstraintsPath;	// 0x207f1
- (id)calendarConstraintsPath;	// 0x207c9
- (int)supportsEmailFlagging;	// 0x207a1
- (int)supportsMailboxSearch;	// 0x20779
// converted property getter: - (id)protocol;	// 0x20711
- (void)setProtocolVersion:(id)version;	// 0x20621
- (void)upgradeWithProtocolVersion:(id)protocolVersion;	// 0x205d9
// converted property setter: - (void)setEncryptionIdentityPersistentReference:(id)reference;	// 0x20591
// converted property getter: - (id)encryptionIdentityPersistentReference;	// 0x20575
// converted property setter: - (void)setSigningIdentityPersistentReference:(id)reference;	// 0x2052d
// converted property getter: - (id)signingIdentityPersistentReference;	// 0x20511
// converted property setter: - (void)setLastKnownProtocolVersion:(id)version;	// 0x204dd
- (BOOL)_shouldSaveLastKnownProtocolVersion;	// 0x204d9
// converted property setter: - (void)setSavedFolderPathsThatClientsCareAbout:(id)about;	// 0x20415
// converted property getter: - (id)savedFolderPathsThatClientsCareAbout;	// 0x203f9
- (BOOL)shouldSavePropertiesForFolderPathsThatClientsCareAbout;	// 0x203f5
- (void)setLastKnownProtocolVersion:(id)version save:(BOOL)save;	// 0x20385
// converted property getter: - (id)lastKnownProtocolVersion;	// 0x20369
// declared property setter: - (void)setMailNumberOfPastDaysToSync:(int)sync;	// 0x2034d
// declared property getter: - (int)mailNumberOfPastDaysToSync;	// 0x202dd
// declared property getter: - (int)mailNumberOfPastDaysToSyncUpperLimit;	// 0x20231
// converted property setter: - (void)setEmailAddresses:(id)addresses;	// 0x1ffe9
// converted property getter: - (id)emailAddresses;	// 0x1ff6d
// converted property setter: - (void)setEmailAddress:(id)address;	// 0x1fef1
// converted property getter: - (id)emailAddress;	// 0x1fed5
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x1fe6d
// converted property getter: - (BOOL)useSSL;	// 0x1fe4d
// converted property setter: - (void)setPort:(int)port;	// 0x1fe31
// converted property getter: - (int)port;	// 0x1fe15
// converted property setter: - (void)setHost:(id)host;	// 0x1fd99
// converted property getter: - (id)host;	// 0x1fd7d
- (id)usernameWithoutDomain;	// 0x1fcf1
// converted property setter: - (void)setUsername:(id)username;	// 0x1fc75
// converted property getter: - (id)username;	// 0x1fc59
// declared property setter: - (void)setASAccountVersion:(int)version;	// 0x1fc15
// declared property getter: - (int)asAccountVersion;	// 0x1fbe1
- (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x1fb39
- (void)autodiscoverTask:(id)task completedWithStatus:(int)status accountInfo:(id)info shouldRetryWithEmail:(id)email error:(id)error;	// 0x1f6ed
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)consumer;	// 0x1f4b5
- (void)_startAutodiscoverTaskWithConsumer:(id)consumer;	// 0x1f331
- (void)cancelAutodiscovery;	// 0x1f2c1
- (void)setUseLocalhostForAutodiscoveryTesting:(BOOL)autodiscoveryTesting;	// 0x1f2b1
- (void)setUseHTTPForTesting:(BOOL)testing;	// 0x1f2a1
- (BOOL)_generateAutodiscoverURLsForEmailAddress:(id)emailAddress;	// 0x1f025
- (void)searchTask:(id)task finishedWithError:(id)error;	// 0x1ef45
- (void)searchTask:(id)task returnedTotalCount:(id)count;	// 0x1eedd
- (void)searchTask:(id)task returnedResults:(id)results;	// 0x1ee95
- (BOOL)searchQueriesRunning;	// 0x1ee6d
- (void)performSearchQuery:(id)query;	// 0x1ec49
- (void)cancelAllSearchQueries;	// 0x1eb71
- (void)cancelSearchQuery:(id)query;	// 0x1ea29
- (void)moveItemsTask:(id)task completedWithStatus:(int)status error:(id)error movedItems:(id)items;	// 0x1e65d
- (void *)_copyDefaultExchangeEventsCalendar:(BOOL)calendar;	// 0x1e4c1
- (void *)_copyExchangeCalendarStore:(BOOL)store;	// 0x1e1bd
- (void)cancelTaskWithID:(int)anId;	// 0x1e191
- (int)sendMessageWithRFC822Data:(id)rfc822Data messageID:(id)anId outgoingMessageType:(int)type originalMessageFolderID:(id)anId4 originalMessageItemID:(id)anId5 originalMessageLongID:(id)anId6 originalAccountID:(id)anId7 consumer:(id)consumer context:(void *)context;	// 0x1df81
- (void)applyNewAccountProperties:(id)properties forceSave:(BOOL)save;	// 0x1df3d
- (void)sendMailTask:(id)task completedWithStatus:(int)status error:(id)error;	// 0x1def9
- (BOOL)itemOperationsTask:(id)task hasPartialResponses:(id)responses;	// 0x1dcbd
- (BOOL)itemOperationsTask:(id)task handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x1dab1
- (void)itemOperationsTask:(id)task completedWithStatus:(int)status error:(id)error responses:(id)responses;	// 0x1d8a5
- (void)fetchAttachmentTask:(id)task completedWithStatus:(int)status dataWasBase64:(BOOL)a64 error:(id)error;	// 0x1d839
- (void)fetchAttachmentTask:(id)task receivedData:(id)data ofContentType:(id)contentType;	// 0x1d7cd
- (BOOL)folderItemsSyncTask:(id)task hasPartialAdded:(id)added removed:(id)removed modified:(id)modified addedResponse:(id)response modifiedResponse:(id)response6 removedResponse:(id)response7 fetchedResponse:(id)response8 moreAvailable:(BOOL)available;	// 0x1d589
- (BOOL)folderItemsSyncTask:(id)task handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x1d361
- (void)folderItemsSyncTask:(id)task completedWithStatus:(int)status error:(id)error newSyncKey:(id)key added:(id)added removed:(id)removed modified:(id)modified addedResponse:(id)response modifiedResponse:(id)response9 removedResponse:(id)response10 fetchedResponse:(id)response11;	// 0x1cc21
- (void)_removeInvitationsForMailboxFolderID:(id)mailboxFolderID;	// 0x1cac5
- (void)_fillOutActionsArray:(id)array responseArray:(id)array2 withTask:(id)task added:(id)added removed:(id)removed modified:(id)modified perserved:(id)perserved addedResponse:(id)response modifiedResponse:(id)response9 removedResponse:(id)response10 fetchedResponse:(id)response11;	// 0x1c3dd
- (BOOL)shouldFixOnDiskDeviceId;	// 0x1c3d9
- (void)_getContextElementsForItemChangeType:(int)itemChangeType dataclass:(int)dataclass nativeContext:(id)context outContext:(id *)context4 outServerId:(id *)anId;	// 0x1c365
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x1c361
- (id)defaultContainerIdentifierForDADataclass:(int)dadataclass;	// 0x1c2f9
- (id)folderIdsThatExternalClientsCareAboutForDataclasses:(int)dataclasses;	// 0x1c2cd
- (id)folderIdsThatExternalClientsCareAbout;	// 0x1c2a5
- (id)asFolderHierarchyTaskManager:(id)manager;	// 0x1c295
- (id)folderWithId:(id)anId;	// 0x1c269
- (id)asFolderWithId:(id)anId;	// 0x1c23d
- (void)blowAwayFolderCache;	// 0x1c215
- (id)foldersTag;	// 0x1c1ed
- (id)deletedItemsFolder;	// 0x1c1c1
- (id)sentItemsFolder;	// 0x1c195
- (id)inboxFolder;	// 0x1c169
- (id)_defaultMailFolderWithDefaultType:(int)defaultType fallbackType:(int)type fallbackName:(id)name;	// 0x1c031
- (id)toDosFolders;	// 0x1bf25
- (id)defaultToDosFolder;	// 0x1bd85
- (id)eventsFolders;	// 0x1bc79
- (id)defaultEventsFolder;	// 0x1bad9
- (id)contactsFolders;	// 0x1b9cd
- (id)defaultContactsFolder;	// 0x1b82d
- (int)sniffableTypeForFolder:(id)folder;	// 0x1b6b1
- (id)_visibleASFolders;	// 0x1b419
- (id)visibleFolders;	// 0x1b3fd
- (id)_folderHierarchy;	// 0x1b395
- (void)resetAccountID;	// 0x1b345
- (void)setEnabled:(BOOL)enabled forDADataclass:(int)dadataclass changeType:(int)type;	// 0x1b1c9
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x1b179
- (BOOL)accountNeedsUpgrade;	// 0x1b081
- (BOOL)upgradeAccount;	// 0x1aff9
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x1abed
- (BOOL)_needsNewAccountIDForOldVersion:(int)oldVersion;	// 0x1abe1
- (id)_oldURLsForKeychain;	// 0x1a971
- (CFStringRef)passwordIsKnownGoodNotificationName;	// 0x1a93d
- (CFStringRef)passwordChangedNotificationName;	// 0x1a909
- (id)shortTypeString;	// 0x1a8b5
- (id)typeString;	// 0x1a861
- (id)displayName;	// 0x1a851
- (id)supportedDataclasses;	// 0x1a7bd
- (id)stateString;	// 0x1a59d
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x1a57d
- (void)getOptionsTask:(id)task completedWithStatus:(int)status supportedCommands:(id)commands supportedVersions:(id)versions error:(id)error;	// 0x1a4a5
- (void)checkValidityWithConsumer:(id)consumer;	// 0x1a3f9
- (id)existingTaskManager;	// 0x1a3cd
// converted property getter: - (id)taskManager;	// 0x1a351
- (void)cleanupAccountFiles;	// 0x1a311
- (void)saveAccountSettings;	// 0x1a2c1
- (id)policyManager;	// 0x1a299
- (void)dealloc;	// 0x1a181
- (id)initWithProperties:(id)properties;	// 0x1a099
- (id)_newPolicyManager;	// 0x1a095
@end

@interface ASAccount (DaemonOptions)
+ (Class)clientClass;	// 0x24e85
@end