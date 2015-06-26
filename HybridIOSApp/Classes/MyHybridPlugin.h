//
//  MyHybridPlugin.h
//  HybridIOSApp
//
//  Created by Holly Schinsky on 6/25/15.
//
//

#import <Cordova/CDVPlugin.h>

@interface MyHybridPlugin : CDVPlugin
- (void)addBookmark:(CDVInvokedUrlCommand*) command;
@end
