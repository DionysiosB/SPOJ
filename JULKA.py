#!/usr/bin/env python

for _ in xrange(10):
    total = int(raw_input());
    diff = int(raw_input());
    common = (total - diff) / 2;
    print (common + diff);
    print common;
