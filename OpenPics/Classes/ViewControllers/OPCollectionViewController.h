//
//  OPCollectionViewController.h
//  OpenPics
//
//  Created by PJ Gray on 3/22/14.
//  Copyright (c) 2014 Say Goodnight Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@class OPProvider;
@interface OPCollectionViewController : UICollectionViewController {
    BOOL _canLoadMore;
    NSNumber* _currentPage;
    BOOL _isSearching;
    NSString* _currentQueryString;
}

@property (strong, nonatomic) NSMutableArray* items;
@property (strong, nonatomic) OPProvider* currentProvider;

- (void) doInitialSearch;
- (void) getMoreItems;

@end
