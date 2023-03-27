// Copyright (c) 2023-2023 Beijing Xiaomi Mobile Software Co., Ltd. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#include <chrono>
#include <string>
#include <memory>
#include <utility>
#include "rclcpp/rclcpp.hpp"
#include "set_mic.hpp"

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::executors::MultiThreadedExecutor executor_;
  auto node = std::make_shared<AudioSetMic>();
  executor_.add_node(node);
  executor_.spin();
  rclcpp::shutdown();
  return 0;
}
