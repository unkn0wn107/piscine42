#!/usr/bin/perl

use warnings;
use strict;

my $y = int rand(100);
my $x = 1;
my $density = int rand($y) + 1;

print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
	for (my $j = 0; $j < $x; $j++) {
		if (int(rand($y) * 2) < $density) {
			print "o";
		}
		else {
			print ".";
		}
	}
	print "\n";
}

