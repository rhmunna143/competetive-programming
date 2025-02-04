class Solution
{
public:
    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {
        int n = rooms.size();
        vector<bool> visited(n, false);
        queue<int> keys;

        // Start with room 0
        keys.push(0);

        while (!keys.empty())
        {
            int currentRoom = keys.front();
            keys.pop();

            if (!visited[currentRoom])
            {
                // Mark room as visited
                visited[currentRoom] = true;

                // Add all keys from current room to queue
                for (int key : rooms[currentRoom])
                {
                    if (!visited[key])
                    {
                        keys.push(key);
                    }
                }
            }
        }

        // Check if all rooms were visited
        for (bool v : visited)
        {
            if (!v)
                return false;
        }

        return true;
    }
};