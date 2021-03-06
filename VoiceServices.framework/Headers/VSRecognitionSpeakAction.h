/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <VoiceServices/VSRecognitionAction.h>

@class NSAttributedString, NSString;

@interface VSRecognitionSpeakAction : VSRecognitionAction {
	BOOL _shouldTerminate;	// 24 = 0x18
}
- (id)initWithSpokenFeedbackString:(id)spokenFeedbackString willTerminate:(BOOL)terminate;	// 0xe1a5
- (int)completionType;	// 0xe18d
- (id)perform;	// 0xe201
@end
