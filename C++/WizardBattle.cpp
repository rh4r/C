  string placeholder_string;
  // Fire advantages or disadvantages
  map<string, float> fire_values = {
    {"water": 0.5},
    {"air": 1.2},
    {"earth": 1.5},
    {"fire": 1},
  }
  // Water advantages or disadvantages
    map<string, float> water_values = {
    {"water": 1},
    {"air": 1},
    {"earth": 0.8},
    {"fire": 1.5},
  }
  // Air advantages or disadvantages
    map<string, float> air_values = {
    {"water": 1},
    {"air": 1},
    {"earth": 1},
    {"fire": 0.8},
  }
  // Earth advantages or disadvantages
    map<string, float> earth_values = {
    {"water": 1.2},
    {"air": 0.5},
    {"earth": 1},
    {"fire": 0.5},
  }

  int index = 0;
  for (const auto& [key, value] : fire_values){
    cout << "Index: " << index << ", Key: " << key << ", Value: " << value;
    ++index;
  }
