//
//  CouchbaseLite.h
//  CouchbaseLite
//
//  Created by James Nocentini on 02/12/2015.
//  Copyright © 2015 Couchbase. All rights reserved.
//

#import <RCTBridgeModule.h>
#import <CouchbaseLiteListener/CBLListener.h>

@interface ReactCBLite : NSObject <RCTBridgeModule>
{
    CBLListener *listener;
}
@end
