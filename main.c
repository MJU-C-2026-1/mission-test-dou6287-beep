/*
  파일이름:
  작 성 자:김도우
*/
import pygame
import sys

class AlienInvasion:
  """Settings for Alien Invasion Game"""

  def__init__(self):
     """Initializing the gmae settings"""
     pygame.init()

     self.screen = pygame.display.set_mode((1200, 800))
     pygame.display.set_caption("Alien_Invasion")

     self.bg_color = (200, 0, 10)


  def run_game(self):
      while True:
          for enent in pygame.event.get():
              if event.type == pygame.QUIT:
                  sys.exit()

      slef.screen.fill(self.bg_color)

      pygame.display.flip()

if __name__ == '__main__':
    ai = AlienInvasion()
    ai.run_game()

  
