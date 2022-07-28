#!/bin/bash
for i in {1..10}
do
	./rand_map_gen.pl > maps/rand_maps/map_$i
done