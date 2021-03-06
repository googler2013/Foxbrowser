//
//  SGViewController.h
//  SGTabs
//
//  Created by simon on 07.06.12.
//
//
//  Copyright (c) 2012 Simon Peter Grätzer
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//


#import <UIKit/UIKit.h>
#import <Security/Security.h>

@class SGTabsViewController;

@interface SGWebViewController : UIViewController <UIWebViewDelegate, UIGestureRecognizerDelegate,
UIActionSheetDelegate, UIAlertViewDelegate>

@property (weak, nonatomic) UIWebView *webView;
@property (weak, nonatomic) UIToolbar *searchToolbar;

@property (strong, nonatomic) NSURL *location;
@property (assign, nonatomic, getter = isLoading) BOOL loading;

- (void)openURL:(NSURL *)url;
- (void)reload;
- (NSInteger)search:(NSString *)searchString;
@end
