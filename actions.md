# Actions

--------------------------------------------------------------------------------------

## swim

if location = river and brick is in inventory
  set game over flag
  print "The brick weighs you down and you drown"

if location = river and gun state is hidden then
    add gun to inventory
    gun state = visible (not hidden)
    print "after a quick swim across the river, you pick up the gun and swim back"

if location = river and gun state != hidden then
    print "One swim is enough for this adventure, I think"

--------------------------------------------------------------------------------------

## get (item)

if _item is hidden_ then
print "I cannot see the _(item)_ here"

if _item is in player inventory_ then
    print "You already have the _(item)_"

if _item is not in this location_ then
    print "I cannot see the _(item)_ here"

if item is in location and is not hidden then
    move item from location to player inventory
    print "ok"
    set flag to describe location

--------------------------------------------------------------------------------------

## drop (item)

if _item in inventory_ then
    move item from inventory to this location
    print "ok"
    set flag to describe location

print "You haven't got the _(item)_"

--------------------------------------------------------------------------------------

## look [core command - not altered by adventure]

set flag to describe location

--------------------------------------------------------------------------------------

## north, south, east, west

if there is an exit in that direction and it is not locked or hidden then
    set new location
    set flag to describe location

if there is an exit in that direction and it is locked then
    print "Cannot go in that direction, the path is blocked"

else
    print "There is no exit in that direction"

--------------------------------------------------------------------------------------

## empty / open (item)

if _item is not in inventory_
    print "But, you don't have that item"

if _item is not bag_ then
    print "That doesn't make sense"

if item is bag and item is in inventory then
    set eyeball to player location
    eyeball is not hidden
    print "From out of the bag of marbles, the jewelled eyeball appears"
    set flag to describe location

--------------------------------------------------------------------------------------

## quit

set game over flag
print "You have quit this game"

--------------------------------------------------------------------------------------

## light (item)

if _item not in inventory_ then
    print "You haven't got that"

if _item is not lamp_
    print "That doesn't make sense"

set lamp status to lit

if location is dark room
    set flag to describe location

--------------------------------------------------------------------------------------

## inventory

if _inventory is empty_
    print "nothing"

for each item in inventory
    list item

--------------------------------------------------------------------------------------

## shoot

if _taxman not present_ then
    print "shoot what?"

if _gun not inventory_ then
    print "You'll need some sort of weapon for that"
