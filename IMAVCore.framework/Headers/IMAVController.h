/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import <IMAVCore/IMAVController.h>
#import <IMAVCore/XXUnknownSuperclass.h>

@protocol IMAVControllerDelegate;

@interface IMAVController : XXUnknownSuperclass {
	id<IMAVControllerDelegate> _delegate;	// 4 = 0x4
	BOOL _blockMultipleIncomingInvitations;	// 8 = 0x8
	BOOL _blockOutgoingInvitationsDuringCall;	// 9 = 0x9
	BOOL _blockIncomingInvitationsDuringCall;	// 10 = 0xa
}
@property(readonly, assign, nonatomic) BOOL _ready;	// G=0x1b7f9; 
@property(readonly, assign, nonatomic) BOOL canUseSmallDataBlobs;	// G=0x1b1ed; 
@property(assign, nonatomic) id<IMAVControllerDelegate> delegate;	// G=0x1b815; S=0x1b825; @synthesize=_delegate
@property(assign, nonatomic) BOOL softwareMicrophoneEnabled;	// G=0x1b349; S=0x1b3ad; 
@property(assign, nonatomic) BOOL softwareCameraEnabled;	// G=0x1b27d; S=0x1b2e1; 
@property(readonly, assign, nonatomic) BOOL softwareMicrophoneSupported;	// G=0x1b269; 
@property(readonly, assign, nonatomic) BOOL softwareCameraSupported;	// G=0x1b255; 
@property(readonly, assign, nonatomic) BOOL ARDClientCapable;	// G=0x1b1d9; 
@property(readonly, assign, nonatomic) BOOL ARDServerCapable;	// G=0x1b205; 
@property(assign, nonatomic) BOOL blockOutgoingInvitationsDuringCall;	// G=0x1b855; S=0x1b865; @synthesize=_blockOutgoingInvitationsDuringCall
@property(assign, nonatomic) BOOL blockIncomingInvitationsDuringCall;	// G=0x1b875; S=0x1b885; @synthesize=_blockIncomingInvitationsDuringCall
@property(assign, nonatomic) BOOL blockMultipleIncomingInvitations;	// G=0x1b835; S=0x1b845; @synthesize=_blockMultipleIncomingInvitations
@property(assign, nonatomic) BOOL blockAudioOnlyCalls;	// G=0x1b415; S=0x1b475; 
@property(assign, nonatomic) BOOL blockARDCapable;	// G=0x1b6a1; S=0x1b705; 
@property(assign, nonatomic) BOOL blockCameraCapable;	// G=0x1b5d5; S=0x1b639; 
@property(assign, nonatomic) BOOL blockMicrophoneCapable;	// G=0x1b4d9; S=0x1b53d; 
@property(readonly, assign, nonatomic) BOOL microphoneConnected;	// G=0x1b159; 
@property(readonly, assign, nonatomic) BOOL cameraConnected;	// G=0x1b145; 
@property(readonly, assign, nonatomic) BOOL multiVideoCapable;	// G=0x1b111; 
@property(readonly, assign, nonatomic) BOOL multiAudioCapable;	// G=0x1b0dd; 
@property(readonly, assign, nonatomic) BOOL microphoneCapable;	// G=0x1b22d; 
@property(readonly, assign, nonatomic) BOOL cameraCapable;	// G=0x1b219; 
@property(readonly, assign, nonatomic) unsigned overallChatState;	// G=0x1aeed; 
@property(readonly, assign, nonatomic) BOOL hasRunningConference;	// G=0x1b1a1; 
@property(readonly, assign, nonatomic) BOOL hasActiveConference;	// G=0x1b16d; 
+ (id)sharedInstance;	// 0x18d41
// declared property setter: - (void)setBlockIncomingInvitationsDuringCall:(BOOL)call;	// 0x1b885
// declared property getter: - (BOOL)blockIncomingInvitationsDuringCall;	// 0x1b875
// declared property setter: - (void)setBlockOutgoingInvitationsDuringCall:(BOOL)call;	// 0x1b865
// declared property getter: - (BOOL)blockOutgoingInvitationsDuringCall;	// 0x1b855
// declared property setter: - (void)setBlockMultipleIncomingInvitations:(BOOL)invitations;	// 0x1b845
// declared property getter: - (BOOL)blockMultipleIncomingInvitations;	// 0x1b835
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x1b825
// declared property getter: - (id)delegate;	// 0x1b815
// declared property getter: - (BOOL)_ready;	// 0x1b7f9
- (void)requestPendingVCInvitations;	// 0x1b7ad
- (void)currentAVChatInfoChanged:(id)changed;	// 0x1b76d
// declared property setter: - (void)setBlockARDCapable:(BOOL)capable;	// 0x1b705
// declared property getter: - (BOOL)blockARDCapable;	// 0x1b6a1
// declared property setter: - (void)setBlockCameraCapable:(BOOL)capable;	// 0x1b639
// declared property getter: - (BOOL)blockCameraCapable;	// 0x1b5d5
// declared property setter: - (void)setBlockMicrophoneCapable:(BOOL)capable;	// 0x1b53d
// declared property getter: - (BOOL)blockMicrophoneCapable;	// 0x1b4d9
// declared property setter: - (void)setBlockAudioOnlyCalls:(BOOL)calls;	// 0x1b475
// declared property getter: - (BOOL)blockAudioOnlyCalls;	// 0x1b415
// declared property setter: - (void)setSoftwareMicrophoneEnabled:(BOOL)enabled;	// 0x1b3ad
// declared property getter: - (BOOL)softwareMicrophoneEnabled;	// 0x1b349
// declared property setter: - (void)setSoftwareCameraEnabled:(BOOL)enabled;	// 0x1b2e1
// declared property getter: - (BOOL)softwareCameraEnabled;	// 0x1b27d
// declared property getter: - (BOOL)softwareMicrophoneSupported;	// 0x1b269
// declared property getter: - (BOOL)softwareCameraSupported;	// 0x1b255
- (BOOL)ardMuxingSupported;	// 0x1b241
// declared property getter: - (BOOL)microphoneCapable;	// 0x1b22d
// declared property getter: - (BOOL)cameraCapable;	// 0x1b219
// declared property getter: - (BOOL)ARDServerCapable;	// 0x1b205
- (BOOL)canReceiveWidescreen;	// 0x1b201
// declared property getter: - (BOOL)canUseSmallDataBlobs;	// 0x1b1ed
// declared property getter: - (BOOL)ARDClientCapable;	// 0x1b1d9
// declared property getter: - (BOOL)hasRunningConference;	// 0x1b1a1
// declared property getter: - (BOOL)hasActiveConference;	// 0x1b16d
// declared property getter: - (BOOL)microphoneConnected;	// 0x1b159
// declared property getter: - (BOOL)cameraConnected;	// 0x1b145
// declared property getter: - (BOOL)multiVideoCapable;	// 0x1b111
// declared property getter: - (BOOL)multiAudioCapable;	// 0x1b0dd
- (void)updateActiveConference;	// 0x1afc5
- (void)setHasActiveConference:(BOOL)conference;	// 0x1af91
- (void)setHasRunningConference:(BOOL)conference;	// 0x1af21
// declared property getter: - (unsigned)overallChatState;	// 0x1aeed
- (void)pushCachedVCCapsToDaemon;	// 0x1aded
- (void)vcCapabilitiesChanged:(unsigned long long)changed;	// 0x1acb1
- (void)setIMAVCapabilities:(int)capabilities toCaps:(int)caps;	// 0x1abc1
- (void)_setServiceVCCaps:(unsigned long long)caps toCaps:(unsigned long long)caps2;	// 0x1aad9
- (void)dumpCaps;	// 0x19f55
- (void)cancelVCRequestWithBuddy:(id)buddy vcProps:(id)props forAccount:(id)account conferenceID:(id)anId;	// 0x199cd
- (void)declineVCRequestWithBuddy:(id)buddy response:(unsigned)response vcProps:(id)props forAccount:(id)account conferenceID:(id)anId;	// 0x192f1
- (id)vcResponseInfoWithSessionID:(unsigned)sessionID;	// 0x192c9
- (id)vcResponseInfoWithSessionID:(unsigned)sessionID ICEData:(id)data natType:(id)type natIP:(id)ip ardChannelInfo:(id)info forParticipant:(id)participant relaySupported:(BOOL)supported;	// 0x190b1
- (void)declineVCRequestWithBuddy:(id)buddy response:(unsigned)response vcProps:(id)props conferenceID:(id)anId;	// 0x1906d
- (id)init;	// 0x19011
- (void)setupIMAVController;	// 0x18edd
- (void)_markSetup;	// 0x18ecd
- (BOOL)_shouldRunConferences;	// 0x18e41
- (BOOL)_shouldHandleInvites;	// 0x18df5
- (BOOL)_runningInLegacyVCApp;	// 0x18df1
- (BOOL)retainWeakReference;	// 0x18ded
- (BOOL)allowsWeakReference;	// 0x18de9
@end

@interface IMAVController (IMAVController_LegacyClassMethods)
+ (void)requestPendingVCInvitations;	// 0x1be39
+ (void)setDelegate:(id)delegate;	// 0x1be01
+ (id)delegate;	// 0x1bdcd
+ (void)setSoftwareMicrophoneEnabled:(BOOL)enabled;	// 0x1bd95
+ (BOOL)softwareMicrophoneEnabled;	// 0x1bd61
+ (void)setSoftwareCameraEnabled:(BOOL)enabled;	// 0x1bd29
+ (BOOL)softwareCameraEnabled;	// 0x1bcf5
+ (BOOL)canReceiveWidescreen;	// 0x1bcf1
+ (BOOL)canUseSmallDataBlobs;	// 0x1bcbd
+ (void)setBlockARDCapable:(BOOL)capable;	// 0x1bc85
+ (BOOL)blockARDCapable;	// 0x1bc51
+ (BOOL)ARDClientCapable;	// 0x1bc1d
+ (BOOL)ARDServerCapable;	// 0x1bbe9
+ (void)setBlockCameraCapable:(BOOL)capable;	// 0x1bbb1
+ (BOOL)blockCameraCapable;	// 0x1bb7d
+ (BOOL)multiVideoCapable;	// 0x1bb49
+ (BOOL)cameraConnected;	// 0x1bb15
+ (BOOL)cameraCapable;	// 0x1bae1
+ (void)setBlockAudioOnlyCalls:(BOOL)calls;	// 0x1baa9
+ (BOOL)blockAudioOnlyCalls;	// 0x1ba75
+ (void)setBlockMicrophoneCapable:(BOOL)capable;	// 0x1ba3d
+ (BOOL)blockMicrophoneCapable;	// 0x1ba09
+ (BOOL)multiAudioCapable;	// 0x1b9d5
+ (BOOL)microphoneConnected;	// 0x1b9a1
+ (BOOL)microphoneCapable;	// 0x1b96d
+ (unsigned)overallChatState;	// 0x1b939
+ (BOOL)hasActiveConference;	// 0x1b905
+ (void)setIMAVCapabilities:(int)capabilities toCaps:(int)caps;	// 0x1b8c9
+ (void)setupIMAVController;	// 0x1b895
@end
