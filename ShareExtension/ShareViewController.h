//
//  ShareViewController.h
//  ShareExtension
//
//  Created by Sam Steele on 7/22/14.
//  Copyright (c) 2014 IRCCloud, Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Social/Social.h>
#import "BuffersTableView.h"
#import "NetworkConnection.h"

@interface ShareViewController : SLComposeServiceViewController<BuffersTableViewDelegate> {
    NetworkConnection *_conn;
    BuffersTableView *_buffersView;
    UIViewController *_splash;
    Buffer *_buffer;
}
@end