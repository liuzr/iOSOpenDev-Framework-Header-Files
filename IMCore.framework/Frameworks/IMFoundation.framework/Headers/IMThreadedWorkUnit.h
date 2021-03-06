/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <IMFoundation/XXUnknownSuperclass.h>

@class NSTimer;

@interface IMThreadedWorkUnit : XXUnknownSuperclass {
	id _delegate;	// 4 = 0x4
	BOOL _kill;	// 8 = 0x8
	BOOL _inProgress;	// 9 = 0x9
	double _timeout;	// 12 = 0xc
	NSTimer *_timeoutTimer;	// 20 = 0x14
	BOOL _done;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) BOOL done;	// G=0xc59d; @synthesize=_done
@property(readonly, assign, nonatomic) BOOL inProgress;	// G=0xc58d; @synthesize=_inProgress
@property(assign, nonatomic) double timeout;	// G=0xc541; S=0xc559; @synthesize=_timeout
@property(assign) id delegate;	// G=0xc56d; S=0xc57d; @synthesize=_delegate
// declared property getter: - (BOOL)done;	// 0xc59d
// declared property getter: - (BOOL)inProgress;	// 0xc58d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0xc57d
// declared property getter: - (id)delegate;	// 0xc56d
// declared property setter: - (void)setTimeout:(double)timeout;	// 0xc559
// declared property getter: - (double)timeout;	// 0xc541
- (void)stopWatchingThread;	// 0xc501
- (void)_stopWatchingThread;	// 0xc4b1
- (void)startThread;	// 0xc421
- (void)_workerThreadFinished;	// 0xc41d
- (void)_timedOut;	// 0xc419
- (void)_workerThread;	// 0xc415
- (void)_doSendDone;	// 0xc399
- (void)_threadedDoStart;	// 0xc315
- (void)dealloc;	// 0xc2d5
- (id)init;	// 0xc261
- (void)_setTimeoutTimer;	// 0xc1c9
- (void)_timeoutHit:(id)hit;	// 0xc189
- (void)_clearTimeoutTimer;	// 0xc149
@end
