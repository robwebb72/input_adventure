# Actions

--------------------------------------------------------------------------------------

## swim

```
if location = river and brick is in inventory
    set game over flag
    print "The brick weighs you down and you drown"

if location = river and gun state is hidden then
    add gun to inventory
    gun state = visible (not hidden)
    print "after a quick swim across the river, you pick up the gun and swim back"

if location = river and gun state != hidden then
    print "One swim is enough for this adventure, I think"
```

--------------------------------------------------------------------------------------

## get (item)

```
if item is_hidden then
print "I cannot see the (item) here"

if item is in player inventory then
    print "You already have the (item)"

if item is not in this location then
    print "I cannot see the (item) here"

if item is in location and is not hidden then
    move item from location to player inventory
    print "ok"
    set flag to describe location
```

--------------------------------------------------------------------------------------

## drop (item)

```
if item in inventory then
    move item from inventory to this location
    print "ok"
    set flag to describe location

print "You haven't got the (item)"
```

--------------------------------------------------------------------------------------

## look [core command - not altered by adventure]

```
set flag to describe location
```

--------------------------------------------------------------------------------------

## north, south, east, west

```
if there is an exit in that direction and it is not locked or hidden then
    set new location
    set flag to describe location

if there is an exit in that direction and it is locked then
    print "Cannot go in that direction, the path is blocked"

else
    print "There is no exit in that direction"
```

--------------------------------------------------------------------------------------

## empty / open (item)

```
if item is not in inventory
    print "But, you don't have that item"

if item is not bag then
    print "That doesn't make sense"

if item is bag and item is in inventory then
    set eyeball to player location
    eyeball is not hidden
    print "From out of the bag of marbles, the jewelled eyeball appears"
    set flag to describe location
```

--------------------------------------------------------------------------------------

## quit

```
set game over flag
print "You have quit this game"
```

--------------------------------------------------------------------------------------

## light (item)

```
if item not in inventory then
    print "You haven't got that"

if item is not lamp
    print "That doesn't make sense"

set lamp status to lit

if location is dark room
    set flag to describe location
```

--------------------------------------------------------------------------------------

## inventory

```
if inventory is empty
    print "nothing"

for each item in inventory
    list item
```

--------------------------------------------------------------------------------------

## shoot

```
if taxman not present then
    print "shoot what?"

if gun not inventory then
    print "You'll need some sort of weapon for that"
```
