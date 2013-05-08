//
//  StreamPlayer.h
//  iGCS
//
//  Created by Andrew on 5/8/13.
//
//

#import <Foundation/Foundation.h>

@protocol StreamPlayerDelegate <NSObject>
@required
- (void) playerProducedData: (NSData*)data;
@end




@interface StreamPlayer : NSObject
{
    id <StreamPlayerDelegate> delegate;
}

@property (strong) id delegate;


+(StreamPlayer*)createWithDelegate:(id<StreamPlayerDelegate>)delegate;
-(void)startPlayback;
-(void)playbackTick;
-(void)stop;

@end